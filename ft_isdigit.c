/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 18:56:20 by psadeghi      #+#    #+#                 */
/*   Updated: 2022/10/13 18:56:32 by psadeghi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

/*
int main()
{
	int    c;
	c = 10;
	printf("%d\n", ft_isdigit(c));
	printf("%d",isdigit(10));
}
*/