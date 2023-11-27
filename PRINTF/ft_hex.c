/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpower <brpower@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:26:34 by brpower           #+#    #+#             */
/*   Updated: 2023/10/24 14:01:00 by brpower          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// For printing hexadecimal  - '% x' OR  - '% X'
// converts unsigned int to its hexadecimal representation, taking into
// account whether it should be in lowercase or uppercase and prints the
// result while keeping track of the string length.
void	ft_hexadecimal(unsigned int exa, int *len, char op)
{
	char	str[20];
	char	*base;
	int		i;

	i = 0;
	if (op == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (exa == 0)
	{
		ft_putchar_len('0', len);
		return ;
	}
	while (exa != 0)
	{
		str[i] = base [exa % 16];
		exa = exa / 16;
		i++;
	}
	while (i--)
		ft_putchar_len(str[i], len);
}

/* void ft_hexadecimal(unsigned int exa, int *len, char op): 
This line defines the function ft_hexadecimal, which takes three parameters:
1: exa: An unsigned int that represents value to be converted to hexa string.
2: len: A pointer to an integer, keeps track of length of the output string.
3: op: A character representing desired case of hexa characters 
       ('x' owercase, 'X' for uppercase).
*/

//char	str[20]; = A buffer:temporary storage to store input output memory.
//'*base' - i the char you will asign 
//'*base' - This is a predetermined fixed value = "0123456789ABCDEF";
//op=option //this is to choose capitals
//16 characters
//If number that I'm passing is 0. print 0 //Print zero then exit
//str[i] = base [exa % 16]; //modulo 
//hex = hex / 16, this is module...
//Example if you input 124, the output will be '72' and the length '2'
//putchar_len 

// For printing pointer - '% p'
void	ft_pointer(unsigned long pointer, int *len)
{
	char	str[20];
	char	*base;
	int		i;

	base = "0123456789abcdef";
	i = 0;
	if (write(1, "0x", 2) < 0)
	{
		(*len) = -1;
		return ;
	}
	(*len) += 2;
	if (pointer == 0)
	{
		ft_putchar_len('0', len);
		return ;
	}
	while (pointer != 0)
	{
		str[i] = base[pointer % 16];
		pointer = pointer / 16;
		i++;
	}
	while (i--)
		ft_putchar_len(str[i], len);
}

// This is the same as hexdecimal but there 

// This line declares a character array named str with a size of 20. 
// It will be used to store the hexadecimal representation of the pointer.

//if (write(1, "0x", 2) < 0).  This tests if there is an error
// ONLY POINTERS CAN BE NULL, BECAUSE MEMORY IS NULL.
// '0x' is unsigned long int, 'len += 2' makes space for two 

// pointer = pointer / 16;: Divides pointer by 16, effectively shifting it 
// right by 4 bits to process the next hexadecimal digit.\

// while (i--) - This loop iterates in reverse order
