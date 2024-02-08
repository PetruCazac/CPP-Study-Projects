/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 23:50:53 by pcazac            #+#    #+#             */
/*   Updated: 2024/02/08 13:38:21 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

float	area(Point const a, Point const b,Point const c){
	float f = ((a.get_point_x() * (b.get_point_y() - c.get_point_y())
			+ b.get_point_x() * (c.get_point_y() - a.get_point_y())
			+ c.get_point_x() * (a.get_point_y() - b.get_point_y())) / 2.0f).toFloat();
	if (f < 0)
		f *= -1;
	return f;
}

bool bsp( Point const a, Point const b, Point const c, Point const point){

	Fixed triangle_area(area(a, b, c));
	Fixed abp(area(a, b, point));
	Fixed bcp(area(b, c, point));
	Fixed acp(area(a, c, point));
	bool location;
	switch (triangle_area == (abp + acp + bcp) && abp != 0.0f && bcp != 0 && acp != 0){
		case true :
			location = true;
			break;
		case false :
			location = false;
			break;
	}
	return (location);
}
