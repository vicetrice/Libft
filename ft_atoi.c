/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarad <valvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:12:51 by valvarad          #+#    #+#             */
/*   Updated: 2023/11/10 13:48:05 by valvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_space(char c)
{
	int	f;
	int	v;

	v = (c == '\v');
	f = (c == '\f');
	return (c == ' ' || c == '\n' || c == '\t' || c == '\r' || v || f);
}

int	ft_atoi(const char *str)
{
	int	signo;
	int	salida;

	signo = 1;
	salida = 0;
	while (is_space(*str) && *str)
	{
		str++;
	}
	if (*str == '-')
	{
		signo *= -1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}
	while (is_numeric(*str) && *str)
	{
		salida *= 10;
		salida += *str - '0';
		str++;
	}
	return (salida * signo);
}
