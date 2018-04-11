/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleste-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 17:33:44 by fleste-l          #+#    #+#             */
/*   Updated: 2017/12/01 11:52:02 by fleste-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		n;

	n = ft_strlen(s);
	while (n >= 0 && s[n] != (unsigned char)c)
		n--;
	if (s[n] == (unsigned char)c)
		return ((char*)s + n);
	return (NULL);
}
