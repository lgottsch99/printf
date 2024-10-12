/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:52:22 by lgottsch          #+#    #+#             */
/*   Updated: 2024/10/12 18:03:34 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef F_PRINTF_H
# define F_PRINTF_H

#include <stdarg.h> //var ft
#include <string.h> //size t
#include <unistd.h> //write

int ft_printf(const char *, ...);

size_t	ft_strlen(const char *s);
void	ft_putchar_fd(char c, int fd);



# endif