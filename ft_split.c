/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/20 14:24:40 by psadeghi      #+#    #+#                 */
/*   Updated: 2022/10/30 10:38:12 by parisasadeq   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const	*s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			words++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (words);
}

static int	ft_free(char	**new, int words)
{
	if (!new[words])
	{
		while (words >= 0)
		{
			free (new[words]);
			words--;
		}
		free (new);
		return (0);
	}
	return (0);
}

static char	**make_arrays(char const	*s, char c, char **new)
{
	unsigned int	i;
	int				words;
	unsigned int	start;
	size_t			len;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			start = i;
			while (s[i] != '\0' && s[i] != c)
				i++;
			len = (size_t)(i - start);
			new[words] = ft_substr(s, start, len);
			ft_free(new, words);
			words++;
		}
		new[words] = NULL;
	}
	return (new);
}

char	**ft_split(char const	*s, char c)
{
	char	**new;
	int		i;

	i = 0;
	new = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!new)
		return (NULL);
	if (s[i] == '\0')
	{
		new[0] = NULL;
		return (new);
	}
	return (make_arrays(s, c, new));
}

/*
int	main()
{
	char s[] = "";
	char c = 'a';
	char **new;
	int	words;

	words = 0;
	new = ft_split(s, c);
	while ( new[words] != NULL)
	{
		printf("%s\n", new[words]);
		words++;
	}
	return (0);
}
*/