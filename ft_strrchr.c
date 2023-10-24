/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarad <valvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:33:04 by valvarad          #+#    #+#             */
/*   Updated: 2023/09/19 18:31:40 by valvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	cont;

	cont = 0;
	while (s[cont])
	{
		cont++;
	}
	while (cont > 0)
	{
		if (s[cont] == c)
			return ((char *)&s[cont]);
		cont--;
	}
	if (c == s[cont])
	{
		return ((char *)&s[cont]);
	}
	return (NULL);
}
