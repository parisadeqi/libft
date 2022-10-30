/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 19:30:59 by psadeghi      #+#    #+#                 */
/*   Updated: 2022/10/15 19:52:06 by parisasadeq   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i + 1 < dstsize)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/*
int	main(void)
{
	char dest1[10] = "jvngkjfhg";
	char dest2[10] = "jvngkjfhg";
	char *src = "hello i'm Paris.";

	ft_strlcpy(dest1, src, 5);
	printf("%s\n", dest1);

	strlcpy(dest2, src, 5);
	printf("%s", dest2);
}
*/