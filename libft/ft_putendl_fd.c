/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:15:07 by enchevri          #+#    #+#             */
/*   Updated: 2024/12/04 22:04:49 by enchevri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putendl_fd(char *s, int fd)
{
	int	count;

	count = 0;
	if (!s)
	{
		return (write(1, "(null)", 6));
	}
	while (*s)
	{
		count += write(fd, s++, 1);
	}
	count += write(fd, "\n", 1);
	return (count);
}
