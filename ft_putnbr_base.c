/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:59:03 by lgottsch          #+#    #+#             */
/*   Updated: 2024/10/16 15:01:34 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


#include <stdio.h>

int	get_len_hex(unsigned long long x)
{
	int len;

	len = 0;
	while (x)
	{
		x = x / 16;
		len++;
	}
	//printf("len is: %i\n", len);
	return (len);
}

int	create_num(char	*base, unsigned long long x, int *count)
{
	int		len;
	char	*str;
	int		i;
	int		error;
	
	if (x == 0)
	{
		error = ft_putchar_fd('0', 1, count);
		return (error);
	}
	len = get_len_hex(x);
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (-1);
	i = 0;
	while (i < len) //store BACKWARDS
	{
		str[i] = base[x % 16];
		x = x / 16;
		i++;
	}
	while (i-- > 0)
		error = ft_putchar_fd(str[i], 1, count);
	free(str);
	return (error);
}

int	ft_putnbr_base(unsigned long long x, const char s, int *count)
{
	char	*upper; 
	char	*lower;
	int		error;
	
	error = 0;
	upper = "0123456789ABCDEF";
	lower = "0123456789abcdef";

	if (s == 'X')
		error = create_num(upper, x, count);
	else if (s == 'x')
		error = create_num(lower, x, count);

	return (error);
}