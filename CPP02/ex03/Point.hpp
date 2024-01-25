/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 00:37:43 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/25 02:47:03 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

#ifndef POINT_HPP
#define POINT_HPP

class Point{

public:

	Point();
	Point(const float x, const float y);
	~Point();
	Point(const Point& p);
	Point& operator=(const Point& p);
	Fixed get_point_x(void) const ;
	Fixed get_point_y(void) const ;
	void set_points(float x, float y);

private:

	Fixed	_x;
	Fixed	_y;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif

