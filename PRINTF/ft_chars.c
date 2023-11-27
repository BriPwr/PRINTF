/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chars.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpower <brpower@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:26:17 by brpower           #+#    #+#             */
/*   Updated: 2023/10/24 13:56:28 by brpower          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// For printing character - '% c'
void	ft_putchar_len(char c, int *len)
{
	if (*len != -1)
	{
		if (write(1, &c, 1) < 0)
		{
			(*len) = -1;
			return ;
		}
		(*len)++;
	}
}
/*
If code is ok then write '1', if code has an error then write '-1' (*len != -1)
This is a failsafe test. If len is less than zero print '-1', as it's an error.
Or else print 'len++', which means that the function works.
*/

// For printing string  - '% s'
/*
this function processes a string, either outputting "(null)" for a NULL 
string or forwarding the string character by character to another function 
while keeping track of the string's length. If an error occurs while 
writing "(null)" to the standard output, it sets the length to -1 to indicate 
*/

void	ft_string(char *args, int *len)
{
	unsigned int	i;

	i = 0;
	if (args == NULL)
	{
		if (write(1, "(null)", 6) == -1)
			*len = -1;
		else
			(*len) += 6;
		return ;
	}
	while (args[i] != '\0' && *len != -1)
	{
		ft_putchar_len(args[i], len);
		i++;
	}
}

// you can use if (!args) (args == NULL)...
/*
If ARGS = NULL then write NULL.
Or else print the string starting at the start and stops before '\0'
The printf function returns 6
*/
