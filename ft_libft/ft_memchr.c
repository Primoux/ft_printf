/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:16:17 by enchevri          #+#    #+#             */
/*   Updated: 2024/11/17 19:25:30 by enchevri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	c;

	str = (unsigned char *)memoryBlock;
	c = (unsigned char)searchedChar;
	i = 0;
	while (i < size)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (0);
}
