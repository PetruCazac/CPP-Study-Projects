/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:02:24 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/24 00:48:08 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {

public:
			Fixed();
			Fixed(const int i);
			Fixed(const float f);
			~Fixed();
			Fixed(const Fixed& other);
	Fixed&	operator = (const Fixed& other);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
	

private:
	int					_fixed_point_value;
	static const int	_fractional_bits = 8;

};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif