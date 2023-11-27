/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpower <brpower@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:26:02 by brpower           #+#    #+#             */
/*   Updated: 2023/10/24 14:00:16 by brpower          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// For printing numbers  - '% d' OR  - '% i'
void	ft_putnbr(int nb, int *len)
{
	if (nb == -2147483648)
	{
		if (write(1, "-2147483648", 11) < 0)
		{
			(*len) = -1;
			return ;
		}
		*len += 11;
		return ;
	}
	if (nb < 0)
	{
		ft_putchar_len('-', len);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, len);
	}
	ft_putchar_len(nb % 10 + '0', len);
}

// Int can be positive or negative, unsigned int can only be positive
// Error -1 means that there is an error
// +- takes into considration the 11 characters, at the time of printing
// 'nb = -nb' turns a negative back into a positive.
// % 10 + '0'         0 converts an int into a char. (ASCII)

// For printing unsigned int  - '% u'
void	ft_unsigned_int(unsigned int nb, int *len)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar_len(nb, len);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, len);
	}
	ft_putchar_len(nb % 10 + '0', len);
}

//This si the same as put number but you dont need: -2147483648, 
//because unsigned int has no negative
