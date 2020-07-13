/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 19:12:41 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/13 17:19:33 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_check_base(char *base);
int		ft_atoi_base(char *str, char *base);
int		ft_strlen(char *str);

int		ft_nb_char(int nbr, char *base)
{
	unsigned int		len_base;
	unsigned int		nb;
	int					c;

	c = 0;
	nb = nbr;
	len_base = ft_strlen(base);
	if (ft_check_base(base) == 1)
	{
		if (nbr < 0)
		{
			nb = -nbr;
			c++;
		}
		while (nb != 0)
		{
			nb = nb / len_base;
			c++;
		}
	}
	return (c);
}

char	*ft_rev(char *re)
{
	int		i;
	int		size;
	char	temp;

	size = ft_strlen(re);
	i = 0;
	while (i < size)
	{
		temp = re[i];
		re[i] = re[size - 1];
		re[size - 1] = temp;
		i++;
		size--;
	}
	return (re);
}

char	*ft_convert_nbr(int origin_nb, unsigned int nb, char *base_to, char *re)
{
	unsigned int	len_base;
	int				i;

	i = 0;
	len_base = ft_strlen(base_to);
	if (nb == 0)
	{
		re[i] = base_to[0];
		i++;
	}
	while (nb > 0)
	{
		re[i] = (base_to[nb % len_base]);
		nb = nb / len_base;
		i++;
	}
	if (origin_nb < 0)
		re[i++] = '-';
	re[i] = '\0';
	ft_rev(re);
	return (re);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int			nb;
	char		*re;
	int			origin_nb;

	nb = ft_atoi_base(nbr, base_from);
	origin_nb = nb;
	if (nb == 0)
		return (NULL);
	if (nb < 0)
		nb = -nb;
	if (ft_nb_char(nb, base_to) == 0)
		return (NULL);
	if (!(re = malloc(sizeof(char) * ft_nb_char(nb, base_to))))
		return (0);
	re = ft_convert_nbr(origin_nb, nb, base_to, re);
	return (re);
}