/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarad <valvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:32:20 by valvarad          #+#    #+#             */
/*   Updated: 2023/09/11 13:55:37 by valvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	alpha;

	alpha = ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
	return ((c >= '0' && c <= '9') || alpha);
}
