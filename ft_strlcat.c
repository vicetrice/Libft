/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarad <valvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:07:06 by valvarad          #+#    #+#             */
/*   Updated: 2023/09/19 17:34:36 by valvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	londst;
	size_t	lonsrc;
	size_t	cont;

	londst = ft_strlen(dst);
	lonsrc = ft_strlen(src);
	if (dstsize <= londst)
		return (lonsrc + dstsize);
	cont = londst;
	while (*src != '\0' && cont < (dstsize - 1))
		*(dst + cont++) = *src++;
	*(dst + cont) = '\0';
	return (londst + lonsrc);
}
