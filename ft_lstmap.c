/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrazina <egrazina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 10:30:22 by egrazina          #+#    #+#             */
/*   Updated: 2022/04/12 13:30:15 by egrazina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*temp;

	newlst = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (temp == NULL)
			ft_lstclear(&temp, del);
		lst = lst->next;
		ft_lstadd_back(&newlst, temp);
	}
	return (newlst);
}
