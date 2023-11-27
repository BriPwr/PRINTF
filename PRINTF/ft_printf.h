/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpower <brpower@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:25:41 by brpower           #+#    #+#             */
/*   Updated: 2023/10/24 13:53:43 by brpower          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h> //For malloc
# include <stdarg.h> //Defines a variable type va_list
# include <stddef.h> //For NULL & size
# include <unistd.h> //For write
# include <stdio.h>  //For printf //linkedin with conditional #ifndef
// FORMATS OF PRINT
int		ft_printf(char const *str, ...);
void	ft_putchar_len(char character, int *len);
void	ft_string(char *args, int *len);
void	ft_putnbr(int nb, int *len);
void	ft_unsigned_int(unsigned int nb, int *len);
void	ft_hexadecimal(unsigned int x, int *len, char op);
void	ft_pointer(unsigned long pointer, int *len);

#endif
