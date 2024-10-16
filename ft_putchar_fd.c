/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:02:21 by lgottsch          #+#    #+#             */
/*   Updated: 2024/10/16 14:45:13 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_fd(char c, int fd, int *count)
{
	if (c && count)
	{	
		write(fd, &c, 1);
		*count += 1;
		return (0);
	}
	else
		return (-1);
}