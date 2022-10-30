/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 11:01:33 by psadeghi      #+#    #+#                 */
/*   Updated: 2022/10/18 11:15:43 by psadeghi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;

	dst = ft_calloc(ft_strlen(src) + 1, sizeof(char));
	if (dst == 0)
		return (0);
	ft_strlcpy(dst, src, ft_strlen(src) + 1);
	return (dst);
}
