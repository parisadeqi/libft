/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 19:26:11 by psadeghi      #+#    #+#                 */
/*   Updated: 2022/10/18 10:29:56 by psadeghi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;
	char	n;

	i = 0;
	ptr = (char *)s;
	n = (char)c;
	while (*(ptr + i) != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (*(ptr + i) == n)
			return (ptr + i);
		i--;
	}
	return (0);
}

/*
while (*(ptr + i - 1) != '\0')
int main()
{
	char p;
	p = 'p';
	const char *s = "My name is parisa padeghi.";
	char *ptr = ft_strrchr(s, p);
	printf("%s", ptr);
}
*/