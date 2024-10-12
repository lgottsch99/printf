/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:13:13 by lgottsch          #+#    #+#             */
/*   Updated: 2024/10/12 18:09:20 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

/*
???: how to comp with libft to use fts
how to 


behaviour std printf:
	only writes to stdout (=terminal)

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
	// redirect to ft 2
	//go thru s and if % found redirect
	len = ft_strlen(s); //max chars in s to check
	i = 0;
	while (i < len)
	{
		if (s[i] == '%')
		{
			//redirect to check case
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
	//char c;
	// char	*str;
	// int	num;
	
	if (s[i + 1] == 'c')
	{
		ft_putchar_fd((char)va_arg(ap, int), 1);
	}
	// if (s[i + 1] == 's')
	// 	//do sth
	// if (s[i + 1] == 'p')
	// 	//do sth
	// if (s[i + 1] == 'd')
	// 	//do sth
	// if (s[i + 1] == 'i')
	// 	//do sth
	// if (s[i + 1] == 'u')
	// 	//do sth
	// if (s[i + 1] == 'x')
	// 		//do sth
	// if (s[i + 1] == 'X')
	// 		//do sth
	// if (s[i + 1] == '%')
	// 		//do sth
	else
		printf("error in test.\n");

	return;
}