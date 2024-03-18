#include "BitcoinExchange.hpp"

	/* Constructors and standart ensemble */
BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::~BitcoinExchange(){}
BitcoinExchange::BitcoinExchange(const BitcoinExchange& b){
	_btcData = b._btcData;
}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& b){
	_btcData = b._btcData;
	return *this;
}
btc& btc::operator=(const btc& b){
	year = b.year;
	month = b.month;
	day = b.day;
	value = b.value;
	return *this;
}
bool btc::operator<=(const btc& b){
	if(year < b.year)
		return (true);
	else if(year == b.year && month < b.month)
		return (true);
	else if(year == b.year && month == b.month && day <= b.day)
		return (true);
	else
		return false;
}
	/* Functional part */

	/* Handle data from btc history .csv */

bool BitcoinExchange::extractData(){
	std::ifstream input(INPUTDATA);
	if(!input.is_open()){
		std::cerr << "ERROR: data file could not be opened" << std::endl;
		return false;
	}
	std::string	line;
	while(std::getline(input, line)){
		if(charLine(line))
			continue;
		populateList(line);
		line.clear();
	}
	return true;
}

void	BitcoinExchange::populateList(std::string& line){
	std::stringstream	ss;
	btc					b;

	for(std::string::iterator it = line.begin(); it < line.end(); it++){
		while(std::isdigit(*it)){
			ss << *it;
			++it;
		}
		ss >> b.year;
		ss.clear();
		ss.str("");
		it++;
		while(std::isdigit(*it)){
			ss << *it;
			++it;
		}
		ss >> b.month;
		ss.clear();
		ss.str("");
		it++;
		while(std::isdigit(*it)){
			ss << *it;
			++it;
		}
		ss >> b.day;
		ss.clear();
		ss.str("");
		it++;
		while(std::isdigit(*it) || *it == '.'){
			ss << *it;
			++it;
		}
		ss >> b.value;
		_btcData.push_back(b);
		ss.clear();
		ss.str("");
	}
}

	/* Handle the user input file */

void BitcoinExchange::showBtcValue(std::ifstream& input){
	btc			request = {0, 0, 0, 0.0};
	std::string	line;

	while(std::getline(input, line)){
		try{
			removeSpace(line);
			if(charLine(line))
				continue;
			if(!std::strlen(line.c_str()))
				throw(NotAValidLine());
			parseInput(line, request);
		} catch (std::exception& e){
			std::cerr << e.what() << std::endl;
		}
	}
	return;
}

bool BitcoinExchange::charLine(std::string& line){
		return std::isalpha(line.at(0)) ? true : false;
}

void BitcoinExchange::removeSpace(std::string& line){
	for(std::string::iterator it = line.begin(); it < line.end(); it++){
		if(std::isspace(*it))
			line.erase(it);
	}
}


void BitcoinExchange::parseInput(std::string& line, btc& b){
	std::stringstream	ss;
	bool				point = false;
	std::string::iterator it = line.begin();

	while(it < line.end() && *it != '-'){
		if(std::isdigit(*it)){
			ss << *it;
			++it;}
		else{
			std::cerr << "Error: bad input => " + line.substr(0, line.find('|'));
			throw(WrongDateException());}
	}
	ss >> b.year;
	ss.clear();
	ss.str("");
	if(*it == '-')
		it++;
	else
		throw(WrongSymbols());
	while(it < line.end() && *it != '-'){
		if(std::isdigit(*it)){
			ss << *it;
			++it;}
		else{
			std::cerr << "Error: bad input => " + line.substr(0, line.find('|'));
			throw(WrongDateException());}
	}
	ss >> b.month;
	ss.clear();
	ss.str("");
	if(*it == '-')
		it++;
	else
		throw(WrongSymbols());
	while(it < line.end() && *it != '|'){
		if(std::isdigit(*it)){
			ss << *it;
			++it;}
		else{
			std::cerr << "Error: bad input => " + line.substr(0, line.find('|'));
			throw(WrongDateException());}
	}
	ss >> b.day;
	ss.clear();
	ss.str("");
	checkDate(b);
	if(*it == '|')
		it++;
	else
		throw(WrongSymbols());
	if(*it == '-')
		throw(NotAPositiveNumber());
	while(it < line.end()){
		if(std::isdigit(*it) || (*it == '.' && !point)){
			ss << *it;
			if(*it == '.' && !point)
				point = true;
			++it;
		}
		else
			throw(NotAValidValue());
	}
	ss >> b.value;
	ss.clear();
	ss.str("");
	checkValue(b);
	printValue(b);
}


	/*Helper Functions*/


void	BitcoinExchange::printValue(btc& b){
	std::cout << b.year;
	std::cout << "-" << std::setw(2) << std::setfill('0') << b.month;
	std::cout << "-" << std::setw(2) << std::setfill('0') << b.day;
	std::cout << " => " << b.value;
	std::cout << " = " << std::fixed << std::setprecision(2) << b.value * findPrice(b) << std::endl;
}

float BitcoinExchange::findPrice(btc& request){
	btc	temp = *(_btcData.begin());

	for(std::list<btc>::iterator it = _btcData.begin(); it != _btcData.end(); it++){
		if(*it <= request){
			if (temp <= *it )
				temp = *it;
		}
	}
	return temp.value;
}

void	BitcoinExchange::checkDate(btc& b){
	bool	leapYear = (b.year % 4 == 0 && b.year % 100 != 0) || (b.year % 400 == 0);

	if(b.year <= 0){
		std::cerr << "Error: bad input => " << b.year << "-" << b.month << "-" << b.day;
		throw(WrongDateException());
	}
	if (b.month < 1 || b.month > 12){
		std::cerr << "Error: bad input => " << b.year << "-" << b.month << "-" << b.day;
		throw(WrongDateException());
	}
	int maxDays = 31;
	switch (b.month) {
		case 4: case 6: case 9: case 11:
			maxDays = 30;
			break;
		case 2:
			maxDays = leapYear ? 29 : 28;
			break;
		default :
			maxDays = 31;
	}
	if (b.day < 0 || b.day > maxDays){
		std::cerr << "Error: bad input => " << b.year << "-" << b.month << "-" << b.day;
		throw(WrongDateException());
	}
}

void	BitcoinExchange::checkValue(btc& b){
	if(b.value < 0)
		throw(NotAPositiveNumber());
	if(b.value > 1000)
		throw(TooLargeNumber());
}