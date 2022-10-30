/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 18:58:03 by psadeghi      #+#    #+#                 */
/*   Updated: 2022/10/14 14:31:26 by psadeghi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char				*ndst;
	const char			*nsrc;
	unsigned long int	i;

	ndst = (char *) dst;
	nsrc = (const char *) src;
	i = 0;
	if (dst == 0 && src == 0)
		return (NULL);
	while (i < len)
	{
		if (src < dst && dst <= src + len)
			ndst[len - i - 1] = nsrc[len - i - 1];
		else
			ndst[i] = nsrc[i];
			i++;
	}
	return (dst);
}

/*
int main(void)
{
	char src[] = "Pares";
	char dst[] = "Pari";
	printf("%s\n", memmove(dst, src, 3));
	printf("%s", ft_memmove(dst, src, 3));
	return (0);
}
*/