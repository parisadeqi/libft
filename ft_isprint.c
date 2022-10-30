/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 18:56:38 by psadeghi      #+#    #+#                 */
/*   Updated: 2022/10/13 18:56:40 by psadeghi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*
int main()
{
	int c;
	c = 127;
	printf("%d\n", ft_isprint(c));
	printf("%d", isprint(c));
}
*/