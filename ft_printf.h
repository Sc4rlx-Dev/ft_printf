/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-raou <oer-raou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:29:55 by oer-raou          #+#    #+#             */
/*   Updated: 2024/02/06 12:29:56 by oer-raou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>  
#include <unistd.h>


int		ft_printf(const char *format, ...);
int		ft_formats(va_list args, const char format);
int		ft_printchar(int c);
int		ft_printstr(char *str);
int		ft_print_ptr(unsigned long long ptr);
int		ft_printnbr(int n);
int		ft_print_unsigned(unsigned int n);
int		ft_print_hex(unsigned int num, const char format);
int		ft_printpercent(void);
void	ft_putstr(char *str);
char	*ft_uitoa(unsigned int n);
int		ft_num_len(unsigned	int num);
char	*ft_itoa(int n);
void	ft_put_hex(unsigned int num, const char format);
int		ft_hex_len(unsigned	int num);
void	ft_putchar_fd(char c, int fd);


#endif
