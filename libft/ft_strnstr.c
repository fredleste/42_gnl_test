/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleste-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 13:28:52 by fleste-l          #+#    #+#             */
/*   Updated: 2017/12/15 18:29:47 by fleste-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	int		j;
	char	*pos;

	i = 0;
	if (to_find[0] == '\0')
		return ((char*)str);
	while (str[i] != '\0' && i < n)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			pos = (char*)str + i;
			while (str[i + j] == to_find[j] && i + j < n)
			{
				j++;
				if (to_find[j] == '\0')
					return (pos);
			}
		}
		i++;
	}
	return (0);
}
