/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:40:26 by enchevri          #+#    #+#             */
/*   Updated: 2024/12/04 22:18:58 by enchevri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar_fd(va_arg(ap, int), 1);
	else if (specifier == 's')
		count += ft_putstr_fd(va_arg(ap, char *), 1);
	else if (specifier == 'p')
		count += print_pointer(va_arg(ap, void *));
	else if (specifier == 'd' || specifier == 'i')
		count += print_digit((va_arg(ap, int)), 10, specifier);
	else if (specifier == 'x' || specifier == 'X')
		count += print_digit((va_arg(ap, unsigned int)), 16, specifier);
	else if (specifier == 'u')
		count += print_digit((va_arg(ap, unsigned int)), 10,
				specifier);
	else
		count += write(1, &specifier, 1);
	return (count);
}
