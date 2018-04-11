/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleste-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 17:21:23 by fleste-l          #+#    #+#             */
/*   Updated: 2017/12/01 17:40:42 by fleste-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*r;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	r = (char*)malloc(sizeof(*r) * len + 1);
	if (r == NULL)
		return (NULL);
	while (f && *s)
	{
		r[i] = f(i, *s++);
		i++;
	}
	r[i] = '\0';
	return (r);
}
