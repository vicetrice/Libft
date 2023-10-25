/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarad <valvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:39:01 by valvarad          #+#    #+#             */
/*   Updated: 2023/10/25 18:47:54 by valvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

unsigned int	contar_caract(int nb)
{
	unsigned int	cont;

	cont = 0;
	if (nb != 0)
	{
		while (nb > 0)
		{
			nb /= 10;
			cont++;
		}
	}
	else
	{
		cont = 1;
	}
	return (cont);
}

unsigned int	obtener_dig_pos(int nb, unsigned int pos)
{
	unsigned int	cont;
	unsigned int	dig;

	cont = 0;
	while (cont < pos)
	{
		dig = nb % 10;
		nb /= 10;
		cont++;
	}
	return (dig);
}

void	poner_num(int n, int fd)
{
	char	c;

	unsigned nc = contar_caract(n);
	while (nc > 0)
	{
		c = (obtener_dig_pos(n, nc) + '0');
		write(fd, &c, 1);
		nc--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-", 1);
		poner_num(2, fd);
		poner_num(147483648, fd);
	}
	else if (n < 0)
	{
		n = n * (-1);
		write(fd, "-", 1);
		poner_num(n, fd);
	}
	else
	{
		poner_num(n, fd);
	}
}
