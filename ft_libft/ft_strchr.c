/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:40:05 by enchevri          #+#    #+#             */
/*   Updated: 2024/11/13 16:25:20 by enchevri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (string[i] == (char)searchedChar)
		{
			return ((char *)&string[i]);
		}
		i++;
	}
	if (string[i] == (char)searchedChar)
		return ((char *)&string[i]);
	return (0);
}
