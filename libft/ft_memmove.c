/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleste-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 17:06:47 by fleste-l          #+#    #+#             */
/*   Updated: 2017/11/27 18:30:27 by fleste-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char*)src;
	d = (unsigned char*)dest;
	while (n > 0 && d < s)
	{
		*d++ = *s++;
		n--;
	}
	while (n > 0 && d > s)
	{
		n--;
		*(d + n) = *(s + n);
	}
	return (dest);
}
