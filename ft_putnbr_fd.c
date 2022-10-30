/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 19:33:01 by psadeghi      #+#    #+#                 */
/*   Updated: 2022/10/13 19:35:38 by psadeghi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n = n * -1 ;
	}
	if (n >= 0 && n <= 9)
	{
		n = n + 48;
		write (fd, &n, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	return ;
}

/*
int main (void)
{
	ft_putnbr_fd(-1000, 1);
	return (0);
}
*/