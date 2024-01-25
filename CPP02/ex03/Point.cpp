/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 23:39:44 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/25 02:46:56 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(), _y(){}
Point::Point(const float x, const float y): _x(x), _y(y){}
Point::~Point(){}
Point::Point(const Point& p){
	this->_x = p._x;
	this->_y = p._y;
}
Point&	Point::operator=(const Point& p){
	if(this != &p){
		_x = p._x;
		_y = p._y;
	}
	return (*this);
}
Fixed	Point::get_point_x(void) const {
	return _x;
}
Fixed	Point::get_point_y(void) const {
	return _y;
}
void	Point::set_points(float x, float y){
	_x = x;
	_y = y;
	return ;
}
