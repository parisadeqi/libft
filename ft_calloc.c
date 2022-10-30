/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 10:47:51 by psadeghi      #+#    #+#                 */
/*   Updated: 2022/10/18 10:57:14 by psadeghi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	count, size_t	size)
{
	void	*dst;

	dst = malloc (count * size);
	if (dst == 0)
		return (0);
	ft_bzero(dst, count * size);
	return (dst);
}
