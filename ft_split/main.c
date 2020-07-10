/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 18:24:00 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/10 10:29:36 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char **ft_split(char *str, char *charset);

int			main(void)
{
	int		i = 0;
	char	*str = "55salut444ca8452va0123et789";
	char	*charset = "0123456789";
	char	**re;

	re = ft_split(str, charset);
	while (re[i])
	{
		printf("%d\n", 1);
		printf("%s\n", re[i]);
		i++;
	}
}
