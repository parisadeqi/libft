/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 18:56:47 by psadeghi      #+#    #+#                 */
/*   Updated: 2022/10/18 10:39:50 by psadeghi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*ptr;
	unsigned char		f;

	ptr = (unsigned const char *) s;
	f = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*(ptr + i) == f)
			return ((char *)s + i);
		i++;
	}
	return (0);
}

/*
int main()
{
	char p;
	size_t n;
	n = 6;
	p = 'd';
	const char *s = "abcdefghi";
	char *ptr = ft_memchr(s, p, n);
	printf("%s", ptr);
}
*/