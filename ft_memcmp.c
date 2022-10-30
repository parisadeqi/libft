/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 12:31:08 by psadeghi      #+#    #+#                 */
/*   Updated: 2022/10/18 13:16:21 by psadeghi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void	*s1, const void	*s2, size_t	n)
{
	unsigned char	*ns1;
	unsigned char	*ns2;
	size_t			i;

	ns1 = (unsigned char *) s1;
	ns2 = (unsigned char *) s2;
	i = 0;
	if (n == 0)
		return (0);
	while (ns1[i] == ns2[i] && ns1 != '\0' && ns2 != '\0' && i < n - 1)
		i++;
	return (ns1[i] - ns2[i]);
}

/*
int main()
{
	printf("%d\n", ft_memcmp("Parisa", "Pariss", 7));
	printf("%d", memcmp("Parisa", "Pariss", 7));
}
*/