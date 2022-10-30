/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 13:21:14 by psadeghi      #+#    #+#                 */
/*   Updated: 2022/10/18 14:22:17 by psadeghi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len)
{
	size_t	n;
	size_t	h;

	h = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[h] != '\0' && h < len)
	{
		n = 0;
		while (needle[n] == haystack[h + n] && h + n < len)
		{
			if (needle[n + 1] == '\0')
				return ((char *)haystack + h);
			n++;
		}
		h++;
	}
	return (0);
}

/*
int	main()
{
	const char *s1 = "Foo Bar Baz";
	const char *s2 = "Bar";
	printf("%s\n", ft_strnstr(s1, s2, 5));
	printf("%s", strnstr(s1, s2, 5));
}
*/