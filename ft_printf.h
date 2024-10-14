/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:52:22 by lgottsch          #+#    #+#             */
/*   Updated: 2024/10/14 16:53:43 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef F_PRINTF_H
# define F_PRINTF_H

#include <stdarg.h> //var ft
#include <string.h> //size t
#include <unistd.h> //write
#include <limits.h> //max values

int ft_printf(const char *, ...);

size_t	ft_strlen(const char *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char *s);
void	ft_putnbr_fd(int n, int fd);





# endif