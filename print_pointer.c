/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:14:41 by enchevri          #+#    #+#             */
/*   Updated: 2024/12/02 13:38:59 by enchevri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		count += write(1, "(nil)", 5);
	else
	{
		count += write(1, "0x", 2);
		count += print_hexa((unsigned long)ptr);
	}
	return (count);
}

int	print_hexa(unsigned long n)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789abcdef";
	if (n < 0)
	{
		write(1, "-", 1);
		return (print_hexa(-n) + 1);
	}
	else if (n < 16)
		return (print_char(symbols[n]));
	else
	{
		count = print_hexa(n / 16);
		return (count + print_hexa(n % 16));
	}
}
