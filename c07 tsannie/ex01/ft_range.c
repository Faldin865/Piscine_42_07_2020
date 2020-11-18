/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 06:06:46 by tsannie           #+#    #+#             */
/*   Updated: 2020/07/09 06:06:50 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *str;
	int vlr;
	int put;

	i = 0;
	put = min;
	vlr = (max - min);
	if (min >= max)
		return (NULL);
	if (!(str = malloc(sizeof(int) * vlr)))
		return (0);
	while (i != vlr)
	{
		str[i] = put;
		i++;
		put++;
	}
	return (str);
}
