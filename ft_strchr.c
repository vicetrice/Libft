/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarad <valvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:45:16 by valvarad          #+#    #+#             */
/*   Updated: 2023/09/19 18:25:21 by valvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	cont;

	cont = 0;
	while (s[cont])
	{
		if (s[cont] == c)
			return ((char *)&s[cont]);
		cont++;
	}
	if (c == 0)
		return ((char *)&s[cont]);
	return (NULL);
}
