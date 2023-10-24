/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarad <valvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:32:52 by valvarad          #+#    #+#             */
/*   Updated: 2023/10/04 17:52:19 by valvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	cont;

	substr = (char *)malloc(sizeof(char) * (len + 1));
	cont = 0;
	if (substr != NULL && *s)
	{
		if (ft_strlen(s) < start)
		{
			return (ft_strdup(""));
		}
		while (cont < len)
		{
			substr[cont] = s[start + cont];
			cont++;
		}
		substr[cont] = '\0';
		return (substr);
	}
	return (NULL);
}
