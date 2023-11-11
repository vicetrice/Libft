/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarad <valvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:18:04 by valvarad          #+#    #+#             */
/*   Updated: 2023/11/10 13:53:03 by valvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	count_words(char const *str, char a)
{
	int	res;
	int	p;

	res = 0;
	p = 0;
	if (str[p] != a && str[p])
	{
		res++;
	}
	while (str[p])
	{
		if (a == str[p] && str[p + 1] != a && str[p + 1] != '\0')
		{
			res++;
		}
		p++;
	}
	return (res);
}

size_t	str_len(char const *stri, char del)
{
	size_t		o;

	o = 0;
	while (stri[o] != del && stri[o])
	{
		o++;
	}
	return (o);
}

void	list_free(char **str)
{
	size_t	l;

	l = 0;
	while (str[l])
	{
		free(str[l]);
		l++;
	}
	free(str[l]);
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**str_list;
	int		i;
	int		wc;

	i = 0;
	wc = 0;
	str_list = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!str_list)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && (!i || s[i - 1] == c))
		{
			str_list[wc] = ft_substr(s, i, str_len(s + i, c));
			if (!(str_list[wc]))
			{
				list_free(str_list);
				return (NULL);
			}
			wc++;
		}
		i++;
	}
	str_list[wc] = NULL;
	return (str_list);
}
