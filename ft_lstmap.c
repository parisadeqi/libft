/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/28 13:44:53 by psadeghi      #+#    #+#                 */
/*   Updated: 2022/10/28 14:09:04 by psadeghi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_link;
	t_list	*new_list;

	new_list = NULL;
	while (lst)
	{
		new_link = ft_lstnew(f(lst->content));
		if (!new_link)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&new_list, new_link);
	}
	return (new_list);
}
