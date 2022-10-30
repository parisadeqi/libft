/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 11:20:19 by psadeghi      #+#    #+#                 */
/*   Updated: 2022/10/18 11:59:14 by psadeghi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ns1;
	unsigned char	*ns2;

	ns1 = (unsigned char *)s1;
	ns2 = (unsigned char *)s2;
	i = 0;
	if (n == 0 || ns1 == ns2)
		return (0);
	while ((i < n) && ns1[i] != '\0' && ns2[i] != '\0')
	{
		if (ns1[i] != ns2[i])
			return (ns1[i] - ns2[i]);
		i++;
	}
	if (ns1[i] != ns2[i] && i != n)
		return (ns1[i] - ns2[i]);
	return (0);
}

/*
int	main()
{
	printf("%d\n", ft_strncmp("parisa", "parissa", 8));
	printf("%d", strncmp("parisa", "parissa", 8));
}
*/