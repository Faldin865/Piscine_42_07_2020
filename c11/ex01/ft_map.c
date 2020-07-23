/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 17:56:58 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/19 20:48:35 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int	*re;

	i = 0;
	re = malloc(sizeof(int) * length + 1);
	while (i < length)
	{
		re[i] = (*f)(tab[i]);
		i++;
	}
	return (re);
}
