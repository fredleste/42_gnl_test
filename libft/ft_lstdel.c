/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleste-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 18:30:15 by fleste-l          #+#    #+#             */
/*   Updated: 2017/12/21 19:50:34 by fleste-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*cur;

	if (alst && *alst && del)
	{
		while (*alst)
		{
			cur = *alst;
			del((*alst)->content, (*alst)->content_size);
			(*alst) = (*alst)->next;
			free(cur);
		}
	}
}
