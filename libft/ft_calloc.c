/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:49:24 by enchevri          #+#    #+#             */
/*   Updated: 2024/11/21 22:39:45 by enchevri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*tab;

	tab = NULL;
	if (elementCount == 0 || elementSize == 0)
		tab = malloc(0);
	else if (elementCount > SIZE_MAX / elementSize)
		return (NULL);
	else
		tab = malloc(elementCount * elementSize);
	if (tab == NULL)
		return (NULL);
	ft_bzero(tab, elementCount * elementSize);
	return (tab);
}
