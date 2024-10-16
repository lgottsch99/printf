/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:54:29 by lgottsch          #+#    #+#             */
/*   Updated: 2024/10/16 14:54:39 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd, int *count)
{
	char	array[10];
	int		i;
	long	num;
	int		error;

	num = n;
	if (num == 0)
	{
		write(fd, "0", 1);
		return (0);
	}
	if (num < 0)
	{
		write(fd, "-", 1);
		num = num * (-1);
	}
	i = 0;
	while (num)
	{
		array[i++] = (num % 10) + 48;
		num = num / 10;
	}
	while (i-- > 0)
		error = ft_putchar_fd(array[i], fd, count);
	return (error);
}
