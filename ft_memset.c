/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 19:36:59 by psadeghi      #+#    #+#                 */
/*   Updated: 2022/10/30 10:40:48 by parisasadeq   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*start_b;

	start_b = (char *) b;
	while (len > 0)
	{
		*start_b = c;
		start_b++;
		len--;
	}
	return (b);
}

/*
int main(void)
{
	char str[50] = "My name is Paris Sadeghi.";
	ft_memset(str, 0, 7*sizeof(char));
	printf("%s\n", ft_memset(str, '0', 0*sizeof(char)));
	printf("%s", memset(str, '0', 0*sizeof(char)));
	return (0);
}
*/