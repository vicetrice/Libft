/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarad <valvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:18:35 by valvarad          #+#    #+#             */
/*   Updated: 2023/10/04 17:41:12 by valvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*res;
	unsigned int	cont;
	size_t			leng;

	cont = 0;
	leng = 0;
	res = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (res != NULL)
	{		
		while (cont < ft_strlen(s1))
		{
			res[leng++] = s1[cont++];
		}
		cont = 0;
		while (cont < ft_strlen(s2))
		{
			res[leng++] = s2[cont++];
		}
		res[leng] = '\0';
		return (res);
	}
	return (NULL);
}
