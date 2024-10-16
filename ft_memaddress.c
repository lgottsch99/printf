/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:59:35 by lgottsch          #+#    #+#             */
/*   Updated: 2024/10/16 15:49:43 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//get mem address of void ptr and print it in lower hex
int	ft_memaddress(void *ptr, int *count)
{
	int error;
	
	if (ptr == NULL)
		error = ft_putstr("(nil)", count);
	else
	{
		error = ft_putchar_fd('0', 1, count);
		error = ft_putchar_fd('x', 1, count);
		error = ft_putnbr_base((unsigned long long)ptr, 'x', count);
	}
	return (error);
}
