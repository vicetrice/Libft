/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarad <valvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:54:04 by valvarad          #+#    #+#             */
/*   Updated: 2023/10/04 19:16:21 by valvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

unsigned int	prove(char const *set, char const c)
{
	size_t	lon;

	lon = 0;
	while (set[lon] && set[lon] != c)
	{
		lon++;
	}
	return (set[lon]);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	rec;
	size_t	cont;
	char	*res;
	size_t	aux;

	aux = 0;
	cont = 0;
	rec = ft_strlen(s1);
	while (s1[cont] && prove(set, s1[cont]))
		cont++;
	while ((rec - 1) && prove(set, s1[rec - 1]))
		rec--;
	if (cont > rec)
		rec = cont;
	res = (char *)malloc(sizeof(char) * (rec - cont + 1));
	if (res)
	{
		while (cont < rec)
			res[aux++] = s1[cont++];
		res[aux] = '\0';
		return (res);
	}
	return (NULL);
}
