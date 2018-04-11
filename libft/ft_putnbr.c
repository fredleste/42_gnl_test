/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleste-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 13:32:34 by fleste-l          #+#    #+#             */
/*   Updated: 2017/12/13 14:39:00 by fleste-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long int	number;
	int			digits;
	char		c;

	number = (((long)n > 0) ? (long)n : -(long)n);
	digits = 1;
	while ((number /= 10) > 0)
		digits = digits * 10;
	number = (((long)n > 0) ? (long)n : -(long)n);
	if (n < 0)
		write(1, "-", 1);
	while (digits)
	{
		c = (char)(number / digits + 48);
		write(1, &c, 1);
		number = number % digits;
		digits = digits / 10;
	}
}
