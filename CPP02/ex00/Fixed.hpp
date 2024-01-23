/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:02:24 by pcazac            #+#    #+#             */
/*   Updated: 2024/01/23 16:13:33 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {

public:
			Fixed();
			~Fixed();
			Fixed(const Fixed& other);
	Fixed&	operator = (const Fixed& other);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

private:
	int					_fixed_point_value;
	static const int	_fractional_bits = 8;

};

#endif