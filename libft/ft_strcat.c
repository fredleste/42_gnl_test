/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleste-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 08:40:20 by fleste-l          #+#    #+#             */
/*   Updated: 2017/11/30 09:14:33 by fleste-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	size_t	cat;

	i = 0;
	cat = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[cat + i] = src[i];
		i++;
	}
	dest[cat + i] = '\0';
	return (dest);
}
