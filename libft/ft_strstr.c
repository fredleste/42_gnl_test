/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleste-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 20:40:47 by fleste-l          #+#    #+#             */
/*   Updated: 2017/11/23 17:35:40 by fleste-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *str, const char *to_find)
{
	int		i;
	int		j;
	char	*pos;

	i = 0;
	if (to_find[0] == '\0')
		return ((char*)str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			pos = (char*)str + i;
			while (str[i + j] == to_find[j])
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
