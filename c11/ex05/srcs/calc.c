/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 12:10:12 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/19 13:55:40 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void		ft_div(int n1, int n2)
{
	int		res;

	res = 0;
	if (n2 == 0 || n1 == 0)
		ft_error(1);
	else
	{
		res = n1 / n2;
		ft_putnbr(res);
	}
}

void		ft_mod(int n1, int n2)
{
	int		res;

	res = 0;
	if (n2 == 0 || n1 == 0)
		ft_error(2);
	else
	{
		res = n1 % n2;
		ft_putnbr(res);
	}
}

void		ft_plus(int n1, int n2)
{
	int		res;

	res = n1 + n2;
	ft_putnbr(res);
}

void		ft_minus(int n1, int n2)
{
	int		res;

	res = n1 - n2;
	ft_putnbr(res);
}

void		ft_multip(int n1, int n2)
{
	int		res;

	res = n1 * n2;
	ft_putnbr(res);
}
