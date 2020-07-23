/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 10:53:12 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/23 11:03:14 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_rev(char *str)
{
	int		i;
	int		n;
	char temp;

	n = ft_strlen(str);
	i = 0;
	while (n > i)
	{
		n--;
		temp = str[n];
		str[n] = str[i];
		str[i] = temp;
		i++;
	}
	return (str);
}

char	*itoa(int nbr)
{
	char	*re;
	int		i;
	int		signe;

	i = 0;
	signe = 1;
	if (nbr == 0)
		return ("0");
	if (nbr == -2147483648)
		return ("-2147483648");
	re = malloc(sizeof(char) * 20);
	if (re == NULL)
		return (NULL);
	if (nbr < 0)
	{
		nbr = -nbr;
		signe = -1;
	}
	while (nbr)
	{
		re[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i++;
	}
	if (signe == -1)
	{
		re[i] = '-';
		i++;
	}
	re[i] = '\0';
	ft_rev(re);
	return (re);
}

#include <stdio.h>

int		main(void)
{
	int		nbr = +150;

	printf("%s\n", itoa(nbr));
}
