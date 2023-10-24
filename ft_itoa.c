/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarad <valvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:21:03 by valvarad          #+#    #+#             */
/*   Updated: 2023/10/24 16:34:00 by valvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	contar_digitos(int a)
{
	int	cont;

	cont = 0;
	if (a < 0)
	{
		if (a == -2147483648)
		{
			a = -2147483645;
		}
		a *= -1;
		cont++;
	}
	else if (a == 0)
	{
		return (1);
	}
	while (a > 0)
	{
		a /= 10;
		cont++;
	}
	return (cont);
}

void	almacenar(char *devuelta, int b, int tam)
{
	int	i;

	i = 0;
	while (b > 0)
	{	
		devuelta[tam - i] = ((b % 10) + '0');
		b /= 10;
		i++;
	}
}

char	*ft_itoa(int n)
{	
	char	*ret;
	int		digitos;

	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
	}
	digitos = contar_digitos(n);
	ret = (char *)malloc(sizeof(char) * (digitos + 1));
	if (!ret)
		return (NULL);
	if (n < 0)
	{	
		n *= -1;
		ret[0] = '-';
	}	
	else if (n == 0)
	{
		ret[0] = '0';
		ret[digitos] = '\0';
		return (ret);
	}
	almacenar(ret, n, digitos - 1);
	ret[digitos] = '\0';
	return (ret);
}
