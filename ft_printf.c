/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:13:13 by lgottsch          #+#    #+#             */
/*   Updated: 2024/10/16 15:01:01 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

/*
???: how to comp with libft to use fts
how to 


behaviour std printf:
	only writes to stdout (=terminal) fd 1
	returns -1 on error! //TO DO

use:
	malloc, free, write,
	va_start, va_arg, va_copy, va_end (va_list is datatype, so ok to use)
	
handle:
	% cspdiuxX%
	
*/
int	check_case(const char *s, int i, va_list ap, int *count);



int ft_printf(const char *s, ...)
{
	int	len;
	int	i;
	int count;
	int	error;

	va_list ap; //args actually a ptr to a struct
	va_start(ap, s);
	len = ft_strlen(s); //max chars in s to check
	count = 0;
	i = 0;
	while (i < len && error >= 0)
	{
		if (s[i] == '%')
		{
			error = check_case(s, i, ap, &count);
			i = i + 2;
		}
		else
			error = ft_putchar_fd(s[i++], 1, &count);
	}
	va_end(ap);
	if (error < 0)
		return (-1);
	else
	return (count);//number of chars printed?
}

//ft2 check which case and redirect to implementing ft
int	check_case(const char *s, int i, va_list ap, int *count)
{
	int	error;

	error = 0;
	
	if (s[i + 1] == 'c')
		error = ft_putchar_fd((char)va_arg(ap, int), 1, count);
	if (s[i + 1] == 's')
		error = ft_putstr((char *)va_arg(ap, char *), count);
	if (s[i + 1] == 'p')
	 	error = ft_memaddress(va_arg(ap, void *), count);
	if (s[i + 1] == 'd' || s[i + 1] == 'i')//d and i same for output, but different for scanf
		error = ft_putnbr_fd(va_arg(ap, int), 1, count);
	if (s[i + 1] == 'u')
		error = ft_putuint(va_arg(ap, unsigned int), count);
	if (s[i + 1] == 'x' || s[i + 1] == 'X')
		error = ft_putnbr_base(va_arg(ap, unsigned int), s[i + 1], count);
	if (s[i + 1] == '%')
		error = ft_putchar_fd('%', 1, count);
	return (error);
}
