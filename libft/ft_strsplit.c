/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleste-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 17:19:48 by fleste-l          #+#    #+#             */
/*   Updated: 2017/12/08 19:00:43 by fleste-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*rip_c(char const *s, int *words, char c)
{
	int		n;
	char	*tmp;

	n = 0;
	tmp = ft_strdup((char*)s);
	if (!tmp)
		return (NULL);
	while (tmp[n] != '\0')
	{
		if ((n == 0 && tmp[n] != c) || (tmp[n] != c && tmp[n - 1] == '\0'))
			(*words)++;
		if (tmp[n] == c)
			tmp[n] = '\0';
		n++;
	}
	return (tmp);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		words;
	char	*tmp;
	char	**split;

	if (!s)
		return (NULL);
	i = -1;
	j = 0;
	words = 0;
	tmp = rip_c(s, &words, c);
	if (!(split = (char**)malloc(sizeof(*split) * words + 1)))
		return (NULL);
	while (j < words)
		if (s[++i] != c)
		{
			split[j++] = ft_strdup(tmp + i);
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	split[j] = NULL;
	free(tmp);
	return (split);
}
