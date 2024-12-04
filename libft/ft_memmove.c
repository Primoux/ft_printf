/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:10:32 by enchevri          #+#    #+#             */
/*   Updated: 2024/11/25 17:24:24 by enchevri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	if (!destination && !source)
		return (NULL);
	if (destination > source)
	{
		while (size-- > 0)
			((unsigned char *)destination)[size]
				= ((unsigned char *)source)[size];
	}
	else
		ft_memcpy(destination, source, size);
	return (destination);
}
