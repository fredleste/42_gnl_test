/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleste-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 14:51:35 by fleste-l          #+#    #+#             */
/*   Updated: 2017/12/13 16:30:09 by fleste-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int				i;
	int				sign;
	long long int	nbr;

	i = 0;
	nbr = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' \
			|| str[i] == '\r' || str[i] == '\f')
		i++;
	sign = str[i] == '-' ? -1 : 1;
	(str[i] == '-' || str[i] == '+') ? i++ : i;
	while (str[i] >= '0' && str[i] <= '9')
		nbr = (nbr * 10) + str[i++] - 48;
	if (i > 19 || nbr > 9223372036854775807)
		return (sign == -1 ? 0 : -1);
	return ((int)nbr * sign);
}
