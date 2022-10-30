/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 11:39:12 by psadeghi      #+#    #+#                 */
/*   Updated: 2022/10/20 14:14:42 by psadeghi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_numbersize(int number)
{
	unsigned int	length;
	long int		long_number;

	long_number = (long int)number;
	length = 0;
	if (long_number < 0)
		length = length + 1;
	if (long_number == 0)
		return (1);
	while (long_number != 0)
	{
		long_number = long_number / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	unsigned int	length;
	long int		long_n;
	char			*str;

	length = ft_numbersize(n);
	str = (char *)malloc(sizeof(char) * (length + 1));
	long_n = (long int)n;
	if (str == NULL)
		return (NULL);
	if (long_n == 0)
		str[0] = '0';
	str[length] = '\0';
	if (long_n < 0)
	{
		str[0] = '-';
		long_n = -long_n;
	}
	while (str && long_n > 0)
	{
		str[length - 1] = (long_n % 10) + '0';
		long_n = long_n / 10;
		length--;
	}
	return (str);
}
/*
int main()
{
	//printf("%d", ft_numbersize(-1234));
	printf("%s", ft_itoa(-1234));
}
*/