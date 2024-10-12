/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:39:36 by lgottsch          #+#    #+#             */
/*   Updated: 2024/10/12 17:24:57 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main (void)
{
	//int		i = 100;
	char	c = 'A';
	//char	*str = "LILLI";
	
	printf("-----------char c-----------\n");
	printf("og char c: %c\n", c);
	ft_printf("my char c: %c\n", c);

	// printf("-----------string s-----------\n");
	// printf("og str: %s\n", str);
	// ft_printf("my str: %s\n", str);

	// printf("-----------string s-----------\n");
	// printf("og str: %s\n", str);
	// ft_printf("my str: %s\n", str);

	
}