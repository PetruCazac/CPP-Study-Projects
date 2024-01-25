/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:02:24 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/24 23:42:01 by pcazac           ###   ########.fr       */
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
			Fixed(const Fixed& fixed);
	Fixed&	operator = (const Fixed& fixed);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

	bool	operator > (const Fixed fixed) const;
	bool	operator >= (const Fixed fixed) const;
	bool	operator < (const Fixed fixed) const;
	bool	operator <= (const Fixed fixed) const;
	bool	operator == (const Fixed fixed) const;
	bool	operator != (const Fixed fixed) const;

	Fixed	operator+(const Fixed& fixed) const;
	Fixed	operator-(const Fixed& fixed) const;
	Fixed	operator*(const Fixed& fixed) const;
	Fixed	operator/(const Fixed& fixed) const;

	Fixed&	operator ++(void);
	Fixed	operator ++(int);
	Fixed&	operator --(void);
	Fixed	operator --(int);

	static Fixed	min(Fixed& fixed_a, Fixed& fixed_b);
	static Fixed	min(const Fixed& fixed_a, const Fixed& fixed_b);
	static Fixed	max(Fixed& fixed_a, Fixed& fixed_b);
	static Fixed	max(const Fixed& fixed_a, const Fixed& fixed_b);

private:
	int					_fixed_point_value;
	static const int	_fractional_bits = 8;

};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif