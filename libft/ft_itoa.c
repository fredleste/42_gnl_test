/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleste-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 16:39:32 by fleste-l          #+#    #+#             */
/*   Updated: 2017/12/13 14:36:07 by fleste-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	long int	number;
	int			digits;
	int			length;
	char		*fresh;

	number = (long)n > 0 ? (long)n : -(long)n;
	digits = 1;
	length = n < 0 ? 2 : 1;
	while ((number /= 10) > 0 && length++)
		digits *= 10;
	if (!(fresh = (char*)malloc(sizeof(*fresh) * length + 1)))
		return (NULL);
	number = (long)n > 0 ? (long)n : -(long)n;
	n < 0 ? *fresh++ = '-' : 1;
	while (digits)
	{
		*fresh++ = (char)(number / digits + 48);
		number %= digits;
		digits /= 10;
	}
	*fresh = '\0';
	return (fresh - length);
}
