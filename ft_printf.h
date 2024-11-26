/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:41:29 by enchevri          #+#    #+#             */
/*   Updated: 2024/11/26 17:17:25 by enchevri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	print_char(int c);
int	print_string(char *str);
int	print_format(char specifier, va_list ap);
int	print_digit(long n, int base, char c);
int	print_hexa(unsigned long n, unsigned long base);

#endif