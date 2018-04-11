/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleste-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 18:15:51 by fleste-l          #+#    #+#             */
/*   Updated: 2017/11/27 13:44:49 by fleste-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char*)src;
	d = (unsigned char*)dest;
	while (n > 0 && *s != (unsigned char)c)
	{
		*d++ = *s++;
		n--;
	}
	if (n > 0)
	{
		*d++ = *s++;
		return ((void*)d);
	}
	return (NULL);
}
