/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 15:45:15 by psadeghi      #+#    #+#                 */
/*   Updated: 2022/10/27 16:30:44 by psadeghi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*first_node;

	first_node = (t_list *)malloc(sizeof(t_list));
	if (first_node == NULL)
		return (NULL);
	first_node->content = content;
	first_node->next = NULL;
	return (first_node);
}
