/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 19:05:18 by psadeghi      #+#    #+#                 */
/*   Updated: 2022/10/18 19:13:22 by psadeghi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char	*s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (*s != '\0')
	{
		f(i, s);
		i++;
		s++;
	}
}
