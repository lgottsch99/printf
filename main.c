/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:39:36 by lgottsch          #+#    #+#             */
/*   Updated: 2024/10/14 17:10:02 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int		i = -10;
	//long	l = -12;
	char	c = 'A';
	char	*str = "LILLI";
	char	*test = malloc(sizeof(int) * 3);
	if (!test)
		printf("malloc error\n");
	
	printf("-----------char c-----------\n"); //OK
	printf("og char c: %c\n", c);
	ft_printf("my ft: %c\n", c);
	printf("\n");

	printf("-----------string s-----------\n"); //OK
	printf("og: %s\n", str);
	ft_printf("my ft: %s\n", str);
	printf("\n");

	printf("-----------ptr address in hex format-----------\n");//TO DO //should be address that is stored in ptr
	printf("og: %p\n", test);
	 //ft_printf("my str: %s\n", str);
	printf("\n");

	printf("-----------decimal d / base 10-----------\n"); //CHECK //takes inout int
	printf("og: %d\n", i);
	ft_printf("my ft: %d\n", i);
	printf("\n");
	
	printf("-----------integer i-----------\n"); //OK, takes int
	printf("og: %i\n", i);
	ft_printf("my str: %i\n", i);
	printf("\n");

	printf("-------------u unsigned decimal base 10---------\n"); //TO DO //takes input  int, but converts to unsigned int
	printf("og: %u\n", i);
	ft_printf("my ft: %u\n", i);
	printf("\n");

	printf("-------------hex lowercase---------\n");//TO DO //takes inout  unsigned int
	printf("og: %x\n", i);
	// ft_printf("my str: %i\n", i);
	printf("\n");
	
	printf("-------------hex uppercase---------\n"); //TO DO //takes inout unsigned int
	printf("og: %X\n", i);
	//ft_printf("my str: %i\n", i);
	printf("\n");

	printf("-------------%%sign---------\n"); //OK
	printf("og: %%\n");
	ft_printf("my str: %%\n");
	printf("\n");

}