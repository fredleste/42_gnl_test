/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleste-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 19:09:20 by fleste-l          #+#    #+#             */
/*   Updated: 2017/12/13 14:39:34 by fleste-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	number;
	int			digits;
	char		c;

	number = (long)n;
	number = ((number < 0) ? -number : number);
	digits = 1;
	while ((number /= 10) > 0)
		digits = digits * 10;
	number = (long)n;
	number = ((number < 0) ? -number : number);
	if (n < 0)
		write(fd, "-", 1);
	while (digits)
	{
		c = (char)(number / digits + 48);
		write(fd, &c, 1);
		number = number % digits;
		digits = digits / 10;
	}
}
