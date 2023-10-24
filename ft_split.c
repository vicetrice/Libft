/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarad <valvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:18:04 by valvarad          #+#    #+#             */
/*   Updated: 2023/10/18 19:11:13 by valvarad         ###   ########.fr       */
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
	if (str[p] != a)
	{	
		res++;
	}
	p++;
	while (str[p])
	{
		if (a == str[p])
		{
			res++;
		}
		p++;
	}	
	return (res);
}

char	*recortar(char const *stri, char del)
{
	int		o;
	char	*palabra;

	o = 0;
	while (stri[o] != del && stri[o])
	{
		o++;
	}	
	palabra = (char *)malloc(sizeof(char) * (o + 1));
	o = 0;
	while (stri[o] != del && stri[o])
	{
		palabra[o] = stri[o];
		o++;
	}
	palabra[o] = '\0';
	return (palabra);
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
	while (s[i] == c && s[i])
		i++;
	if (s[i])
		str_list[wc++] = recortar(s + i, c);
	while (s[i])
	{	
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != '\0'))
		{
			i++;
			str_list[wc] = recortar(s + i, c);
			wc++;
		}
		i++;
	}
	str_list[wc] = NULL;
	return (str_list);
}

/*int main()
{
	char **wl = ft_split("\0aa\0bbb", '\0');
	int cont = 0;

	while(wl[cont]){
		printf("%s\n",wl[cont]);
		cont++;

	}}*/