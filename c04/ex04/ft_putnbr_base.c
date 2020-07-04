/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 15:55:28 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/04 19:58:40 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_check_base(char *base)
{
	int i;
	int n;

	n = 0;
	i = 0;
		while (base[i] != base [i + 1] && base[i] && 
				base[i] != '-' && base[i] != '+')
			i++;
	
	if (i < 2 || base[i] != '\0')
		return (-1);
	else
		return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int size;

	if (ft_check_base(base) == 1)
	{
		size = ft_strlen(base);
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		if (nbr <= size)
			ft_putchar(base[nbr]);
		else
		{
			ft_putnbr_base(nbr / size, base);
			ft_putnbr_base(nbr % size, base);
		}
	}
}
