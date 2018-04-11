/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleste-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 08:39:31 by fleste-l          #+#    #+#             */
/*   Updated: 2017/11/30 09:14:27 by fleste-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	cat;

	i = 0;
	cat = ft_strlen(dest);
	while (i < n && src[i] != '\0')
	{
		dest[cat + i] = src[i];
		i++;
	}
	dest[cat + i] = '\0';
	return (dest);
}
