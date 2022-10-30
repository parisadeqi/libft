/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 19:31:41 by psadeghi      #+#    #+#                 */
/*   Updated: 2022/10/18 10:26:51 by psadeghi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	char	n;

	ptr = (char *)s;
	n = (char) c;
	while (*ptr != n && *ptr != '\0')
		ptr++;
	if (n == *ptr)
		return (ptr);
	return (0);
}

/*
int main()
{
	char ghostantanie;
	ghostantanie = 'e';
	const char *s = "teste";

	//char *ptr = ft_strchr(s, ghostantanie);
	printf("%s\n", ft_strchr(s, ghostantanie));
	printf("%s", strchr(s, ghostantanie));
}
*/