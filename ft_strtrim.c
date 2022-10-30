/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 17:51:40 by psadeghi      #+#    #+#                 */
/*   Updated: 2022/10/28 14:46:46 by psadeghi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkset(char c, char const	*set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const	*s1, char const	*set)
{
	int		i;
	int		first;
	int		last;
	char	*ns;

	i = 0;
	first = 0;
	last = (int)ft_strlen(s1);
	if (s1 == 0 || set == 0)
		return (0);
	while (s1[first] && ft_checkset(s1[first], set))
		first++;
	while (last > first && ft_checkset(s1[last - 1], set))
		last--;
	ns = (char *)malloc(sizeof(char) * (last - first + 1));
	if (!ns)
		return (0);
	while (first < last)
	{
		ns[i] = s1[first];
		i++;
		first++;
	}
	ns[i] = '\0';
	return (ns);
}
