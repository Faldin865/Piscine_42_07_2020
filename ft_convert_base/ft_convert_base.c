/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 19:12:41 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/13 15:37:04 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_check_base(char *base);
int		ft_atoi_base(char *str, char *base);
int		ft_strlen(char *str);


int		ft_nb_char(int nbr, char *base)
{
	unsigned int 	len_base;
	unsigned int 	nb;
	int				c;

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



char	*ft_convert_nbr(unsigned int atoi, int nb, char *base, char *re)
{
	unsigned int	len_base;
	int				i;

	i = 0;
	len_base = ft_strlen(base);
	while (atoi > 0)
	{
		re[i] = (base[atoi % len_base]);
		atoi = atoi / len_base;
		i++;
	}
	if (nb < 0)
		re[i++] = '-';
	re[i] = '\0';
	return (re);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*atoi_res;
	char 	*res;
	unsigned atoi;

	nb = ft_atoi_base(nbr, base_from);
	atoi = nb;
	if (nb == 0)
		return (NULL);
	if (!(atoi_res = malloc(sizeof(int) * ft_nb_char(nb, base_from) + 1)))
			return(0);
	if (!(res = malloc(sizeof(char) * 40 + 1)))
			return (0);
	res = ft_convert_nbr(atoi, nb, base_to, atoi_res);
	if (res == NULL)
		return(NULL);
	return (res);
}
