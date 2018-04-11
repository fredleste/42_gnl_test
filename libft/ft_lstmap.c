/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleste-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/26 12:45:59 by fleste-l          #+#    #+#             */
/*   Updated: 2017/12/26 15:09:37 by fleste-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lstmap;
	t_list	*temp;

	if (!lst || !(*f))
		return (NULL);
	temp = (*f)(lst);
	lstmap = temp;
	while (lst->next)
	{
		lst = lst->next;
		temp->next = (*f)(lst);
		temp = temp->next;
	}
	return (lstmap);
}
