/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 18:57:49 by psadeghi      #+#    #+#                 */
/*   Updated: 2022/10/14 13:32:28 by psadeghi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned long int	i;
	char				*ndst;
	char				*nsrc;

	ndst = (char *)dst;
	nsrc = (char *) src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		ndst[i] = nsrc[i];
		i++;
	}
	return (dst);
}

/*
int main(void)
{
	char nsrc[] = "My name is";
	char ndst[12] = "My name is";
	printf("%s\n", memcpy(ndst, nsrc, sizeof(11)));
	printf("%s", ft_memcpy(ndst, nsrc, sizeof(11)));
	return (0);
}
*/