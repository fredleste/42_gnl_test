/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleste-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 11:41:52 by fleste-l          #+#    #+#             */
/*   Updated: 2017/12/06 16:04:29 by fleste-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*trim;
	int		i;
	int		j;
	int		k;

	if (!s)
		return (NULL);
	i = 0;
	k = 0;
	j = ft_strlen(s) - 1;
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	while (i < j && (s[j] == ' ' || s[j] == '\n' || s[j] == '\t'))
		j--;
	trim = (char*)malloc(sizeof(*trim) * j - i + 2);
	if (!trim)
		return (NULL);
	while (i <= j)
		trim[k++] = s[i++];
	trim[k] = '\0';
	return (trim);
}
