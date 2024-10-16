/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:52:22 by lgottsch          #+#    #+#             */
/*   Updated: 2024/10/16 14:59:43 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef F_PRINTF_H
# define F_PRINTF_H

#include <stdarg.h> //var ft
#include <string.h> //size t
#include <unistd.h> //write
#include <limits.h> //max values
#include <stdlib.h> //malloc, free

int ft_printf(const char *, ...);

size_t	ft_strlen(const char *s);
int		ft_putchar_fd(char c, int fd, int *count);
int		ft_putstr(char *s, int *count);
int		ft_putnbr_fd(int n, int fd, int *count);
int		ft_putnbr_base(unsigned long long x, const char s, int *count);
int		ft_putuint(unsigned int x, int *count);
int		ft_memaddress(void *ptr, int *count);





# endif