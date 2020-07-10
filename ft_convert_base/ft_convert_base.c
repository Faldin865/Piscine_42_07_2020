/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 19:12:41 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/10 11:44:22 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);
int		ft_strlen(char *str);

int		ft_check_base_nbr(char *base)
{
	int i;
	int n;
	int x;

	n = 0;
	i = 0;
	while (base[i])
	{
		x = 0;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[x])
		{
			if (i != x && base[i] == base[x] && base[i] != '\0'
					&& base[x] != '\0')
				return (0);
			x++;
		}
		n++;
		i++;
	}
	return (n > 1 ? 1 : 0);
}

char	*ft_putnbr_base(int nbr, char *base, char *re)
{
	int size;

	if (ft_check_base_nbr(base) == 1)
	{
		size = ft_strlen(base);
		if (nbr < 0)
		{
			re = "-";
			nbr = -nbr;
		}
		if (nbr <= size)
			re = &base[nbr];
		else
		{
			ft_putnbr_base(nbr / size, base, re);
			ft_putnbr_base(nbr % size, base, re);
		}
	}
	return (re);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*re;
	char	*n;
	char	*base_f;
	char	*base_t;

	base_t = base_to;
	base_f = base_from;
	n = nbr;
	nb = 0;
	nb = ft_atoi_base(n, base_f);
	re = malloc(sizeof(char) * nb + 1);
	re = ft_putnbr_base(nb, base_t, re);
	return (re);
}
