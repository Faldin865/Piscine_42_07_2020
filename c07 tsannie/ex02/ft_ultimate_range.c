/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 06:35:25 by tsannie           #+#    #+#             */
/*   Updated: 2020/07/12 20:14:21 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int vlr;
	int put;

	i = 0;
	put = min;
	vlr = (max - min);
	*range = NULL;
	if (min >= max)
		return (0);
	else
	{
		*range = malloc(sizeof(int) * vlr);
		if (*range == NULL)
			return (-1);
		while (i != vlr)
		{
			(*range)[i] = put;
			i++;
			put++;
		}
	}
	return (i);
}
