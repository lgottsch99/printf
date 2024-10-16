/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:39:36 by lgottsch          #+#    #+#             */
/*   Updated: 2024/10/16 15:53:27 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

/* TO DO
	??	how to make ret become -1 ??
	if ptr is NUll printf (nil)!

edge cases: 
	str is null?

*/

int main (void)
{
	int		i = -10;
	char	c = 'A';
	char	*str = "LILLI";
	char	*test = NULL;
	int		ret;
	
	printf("-----------char c-----------\n"); //OK
	printf("og char c: %c\n", c);
	ret = ft_printf("my ft: %c\n", c);
	printf("ret: %i\n", ret);
	printf("\n");

	printf("-----------string s-----------\n"); //OK
	printf("og: %s\n", str);
	ret = ft_printf("my ft: %s\n", str);
	printf("ret: %i\n", ret);
	printf("\n");

	printf("-----------ptr address in hex format-----------\n");//TO DO //should be address
	printf("og: %p\n", test);
	ret = ft_printf("my ft: %p\n", test);
	printf("ret: %i\n", ret);
	printf("\n");

	printf("-----------decimal d / base 10-----------\n"); //CHECK //takes inout int
	printf("og: %d\n", i);
	ret = ft_printf("my ft: %d\n", i);
	printf("ret: %i\n", ret);
	printf("\n");
	
	printf("-----------integer i-----------\n"); //OK, takes int
	printf("og: %i\n", i);
	ret = ft_printf("my str: %i\n", i);
	printf("ret: %i\n", ret);
	printf("\n");

	printf("-------------u unsigned decimal base 10---------\n"); //OK //takes input  int, but converts to unsigned int
	printf("og: %u\n", i);
	ret = ft_printf("my ft: %u\n", i);
	printf("ret: %i\n", ret);
	printf("\n");

	printf("-------------hex lowercase---------\n");//TO DO //takes inout  unsigned int
	printf("og: %x\n", i);
	ret = ft_printf("my str: %x\n", i);
	printf("ret: %i\n", ret);
	printf("\n");
	
	printf("-------------hex uppercase---------\n"); //TO DO //takes inout unsigned int
	printf("og: %X\n", i);
	ret = ft_printf("my str: %X\n", i);
	printf("ret: %i\n", ret);
	printf("\n");

	printf("-------------%%sign---------\n"); //OK
	printf("og: %%\n");
	ret = ft_printf("my str: %%\n");
	printf("ret: %i\n", ret);
	printf("\n");

	printf("-------------all together---------\n"); //OK
	printf("og: hi %i i am %s and i am %% 100 tired. some mem address:  %p and some hex numbers \n%x\n%X\n", i, str, test, i, i);
	ret = ft_printf("my ft: hi %i i am %s and i am %% 100 tired. some mem address:  %p and some hex numbers \n%x\n%X\n", i, str, test, i, i);
	printf("ret: %i\n", ret);

}