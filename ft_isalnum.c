/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 18:54:30 by psadeghi      #+#    #+#                 */
/*   Updated: 2022/10/13 19:46:03 by psadeghi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}

/*
int main()
{
	int	c;
	c = 'z';
	printf("%d\n", ft_isalnum(c));
	printf("%d", isalnum(c));
}
*/