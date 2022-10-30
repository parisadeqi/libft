/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 19:31:29 by psadeghi      #+#    #+#                 */
/*   Updated: 2022/10/13 19:31:31 by psadeghi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	i = 0;
	while (dst[i] && i < dstsize)
	{
		i++;
	}
	dst_len = i;
	while ((src[i - dst_len] && i + 1 < dstsize))
	{
		dst[i] = src[i - dst_len];
		i++;
	}
	if (dst_len < dstsize)
		dst[i] = '\0';
	return (dst_len + src_len);
}

/*
int	main(void)
{
	char src[7] = "Paris.";
	char dst1[30] = "My Name is ";
	char dst2[30] = "My Name is ";
	ft_strlcat(dst1, src, 0);
	printf("%s\n", dst1);

	strlcat(dst2, src, 0);
	printf("%s", dst2);
}
*/