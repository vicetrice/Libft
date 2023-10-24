/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarad <valvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:30:05 by valvarad          #+#    #+#             */
/*   Updated: 2023/09/19 18:12:25 by valvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;

	s = (unsigned char *)b;
	while (len > 0)
	{
		*s = (unsigned char)c;
		s++;
		len--;
	}
	return (b);
}
