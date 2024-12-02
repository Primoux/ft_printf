/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:18:15 by enchevri          #+#    #+#             */
/*   Updated: 2024/11/21 22:45:39 by enchevri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	size_t	len;
	char	*tab;

	len = ft_strlen(source);
	tab = ft_calloc(len + 1, sizeof(char));
	if (tab == NULL)
		return (NULL);
	ft_memcpy(tab, source, len);
	return (tab);
}
