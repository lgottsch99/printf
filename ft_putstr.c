/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:33:29 by lgottsch          #+#    #+#             */
/*   Updated: 2024/10/16 14:47:20 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s, int *count)
{
	int	i;

	i = 0;
	if (s && count)
	{
		while (s[i])
		{
			ft_putchar_fd(s[i], 1, count);
			i++;
		}
		return (0);
	}
	else
		return (-1);
}
