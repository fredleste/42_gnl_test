/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleste-l <fleste-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 09:35:29 by fleste-l          #+#    #+#             */
/*   Updated: 2018/03/28 13:27:29 by fleste-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	char	*f;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	f = (char*)malloc(sizeof(char) * (l1 + l2 + 1));
	if (f == NULL)
		return (NULL);
	while (*s1)
		f[i++] = *s1++;
	while (*s2)
		f[i++] = *s2++;
	f[i] = '\0';
	return (f);
}
