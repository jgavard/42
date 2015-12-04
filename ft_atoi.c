/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 15:39:30 by jgavard           #+#    #+#             */
/*   Updated: 2015/12/02 15:39:32 by jgavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_isspace(char c)
{
	if (c == ' ' ||\
			c == '\t' ||\
			c == '\n' ||\
			c == '\v' ||\
			c == '\f' ||\
			c == '\r')
		return (1);
	return (0);
}

int					ft_atoi(const char *str)
{
	int			k;
	int			result;

	result = 0;
	k = 0;
	while (ft_isspace(*str) && *str)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			k = 1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		result *= 10;
		result += (*str - 48);
		str++;
	}
	if (k)
		result = -result;
	return (result);
}
