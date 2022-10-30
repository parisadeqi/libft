/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 18:53:23 by psadeghi      #+#    #+#                 */
/*   Updated: 2022/10/14 13:27:42 by psadeghi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void	*s, size_t	n)
{
	char	*start_s;

	start_s = (char *) s;
	while (n > 0)
	{
		*start_s = 0;
		start_s++;
		n--;
	}
}

/*
int main(void)
{
	char str[50] = "My name is Parisa Sadeghi.";
	printf("%s\n", bzero(str, 2*sizeof(char)));
	printf("%s", ft_bzero(str, 2*sizeof(char)));
	return (0);
}
*/