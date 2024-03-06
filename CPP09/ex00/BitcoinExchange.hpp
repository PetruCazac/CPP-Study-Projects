#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <list>

const char* const INPUTDATA = "data.csv";

struct btc{
	int year;
	int month;
	int day;
	float value;
	btc& operator=(const btc& b);
	bool operator<=(const btc& b);
};

class BitcoinExchange {

private:
	std::list<btc> _btcData;

public:
	BitcoinExchange();
	~BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& b);
	BitcoinExchange& operator=(const BitcoinExchange& b);

	bool	extractData();
	void	populateList(std::string& line);
	void	showBtcValue(std::ifstream& input);
	void	parseInput(std::string& str, btc& b);
	float	findPrice(btc& request);
	void	checkDate(btc& b);
	void	checkValue(btc& b);
	bool	charLine(std::string& line);
	void	removeSpace(std::string& line);

	/*Exceptions*/
	class NotAPositiveNumber : public std::exception {
		const char* what() const throw(){
			return "ERROR: not a positive number";
		};
	};
	class TooLargeNumber : public std::exception {
		const char* what() const throw(){
			return "ERROR: number too large";
		};
	};
	class NotAValidDate : public std::exception {
		const char* what() const throw(){
			return "ERROR: date is not valid";
		};
	};
	class NotAValidLine : public std::exception {
		const char* what() const throw(){
			return "ERROR: line has no data";
		};
	};
	class WrongSymbols : public std::exception {
		const char* what() const throw(){
			return "ERROR: line has wrong delimitation symbols";
		};
	};
};

#endif