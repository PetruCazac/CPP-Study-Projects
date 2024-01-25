/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 23:50:53 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/25 14:21:12 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

float	area(Point const a, Point const b,Point const c){
	return (((a.get_point_x() * (b.get_point_y() - c.get_point_y())
			+ b.get_point_x() * (c.get_point_y() - a.get_point_y())
			+ c.get_point_x() * (a.get_point_y() - b.get_point_y())) / 2.0f).toFloat());
}

bool bsp( Point const a, Point const b, Point const c, Point const point){

	Fixed triangle_area(area(a, b, c));
	Fixed abp(area(a, b, point));
	Fixed acp(area(a, c, point));
	Fixed bcp(area(b, c, point));

	bool location;
	switch (triangle_area > (abp + acp + bcp)){
		case true :
			location = true;
			break;
		case false :
			location = false;
			break;
	}
	return (location);
}
