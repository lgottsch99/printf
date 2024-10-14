/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:13:13 by lgottsch          #+#    #+#             */
/*   Updated: 2024/10/14 17:06:10 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

/*
???: how to comp with libft to use fts
how to 


behaviour std printf:
	only writes to stdout (=terminal) fd 1

use:
	malloc, free, write,
	va_start, va_arg, va_copy, va_end (va_list is datatype, so ok to use)
	
handle:
	% cspdiuxX%
	
*/
void	check_case(const char *s, int i, va_list args);


int ft_printf(const char *s, ...)
{
	int	len;
	int	i;

	//start w variadic function
	va_list ap; //args actually a ptr to a struct
	
	va_start(ap, s);
	//go thru s and if % found redirect
	len = ft_strlen(s); //max chars in s to check
	i = 0;
	while (i < len)
	{
		if (s[i] == '%')
		{
			//redirect to check case
			//printf("found placeholder\n");
			check_case(s, i, ap);
			i = i + 2;
		}
		else
		{
			ft_putchar_fd(s[i], 1);
			i++;
		}
	}

	va_end(ap);
	return 0;//number of chars printed?
}

//ft2 check which case and redirect to implementing ft
void	check_case(const char *s, int i, va_list ap)
{	
	if (s[i + 1] == 'c')
		ft_putchar_fd((char)va_arg(ap, int), 1);
	if (s[i + 1] == 's')
		ft_putstr((char *)va_arg(ap, char *));
	// if (s[i + 1] == 'p')
	// 	ft_memaddress()
	if (s[i + 1] == 'd')
		ft_putnbr_fd(va_arg(ap, int), 1);
	if (s[i + 1] == 'i')
		ft_putnbr_fd(va_arg(ap, int), 1);

	if (s[i + 1] == 'u') 					// NOT OK
		ft_putnbr_fd(va_arg(ap, int), 1);//TO DO needs to convert to uint first then print
	// if (s[i + 1] == 'x')
	// 		//putnbr base 
	// if (s[i + 1] == 'X')
	// 		//putnbr base
	if (s[i + 1] == '%')
		ft_putchar_fd('%', 1);
	return;
}
