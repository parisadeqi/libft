/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: parisasadeqi <parisasadeqi@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/15 11:20:12 by parisasadeq   #+#    #+#                 */
/*   Updated: 2022/10/15 12:21:04 by parisasadeq   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str
		[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	return (res * sign);
}
