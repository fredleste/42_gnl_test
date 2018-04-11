/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleste-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 10:06:43 by fleste-l          #+#    #+#             */
/*   Updated: 2017/11/30 15:42:57 by fleste-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s2, const char *s1, size_t size)
{
	size_t	i;
	size_t	n;
	size_t	l1;
	size_t	l2;

	i = 0;
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	if (size == 0)
		return (l1);
	if (size <= l2)
		return (l1 + size);
	n = size - l2 - 1;
	while (i < n && s1[i] != '\0')
	{
		s2[l2 + i] = s1[i];
		i++;
	}
	s2[l2 + i] = '\0';
	return (l1 + l2);
}
