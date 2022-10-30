/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 19:36:01 by psadeghi      #+#    #+#                 */
/*   Updated: 2022/10/13 19:36:14 by psadeghi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
	if (s[i] == '\0')
	{
		write(fd, "\n", 1);
	}
	return ;
}

/*
int main(void)
{
	ft_putendl_fd("Paris", 1);
	write (1, "yesss", 5);
	return (0);
}
*/