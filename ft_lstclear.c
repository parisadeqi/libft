/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/28 12:36:04 by psadeghi      #+#    #+#                 */
/*   Updated: 2022/10/28 13:26:09 by psadeghi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst)
		return ;
	while (*lst != NULL)
	{
		temp = *lst;
		del(temp->content);
		*lst = temp->next;
		free (temp);
	}
	lst = NULL;
}
