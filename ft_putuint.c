/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:36:04 by lgottsch          #+#    #+#             */
/*   Updated: 2024/10/16 15:01:54 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


#include <stdio.h>

int	get_len(unsigned int x)
{
	int	i;

	i = 0;
	while (x)
	{
		x = x / 10;
		i++;
	}
	return (i);
}

int	ft_putuint(unsigned int x, int *count)
{
	char	*str;
	int		len;
	int		i;
	int		error;
	
	if (x == 0)
	{
		error = ft_putchar_fd('0', 1, count);
		return (error);
	}
	len = get_len(x);
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (-1);
	i = 0;
	while (i < len)//copy in BACKWARD order
	{
		str[i++] = (x % 10) + 48;
		x = x / 10;
	}
	while (i-- > 0)
		error = ft_putchar_fd(str[i], 1, count);
	free (str);
	str = NULL;
	return (error);
}
