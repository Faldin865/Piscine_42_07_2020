/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 18:24:00 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/10 11:27:26 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char **ft_split(char *str, char *charset);

int			main(void)
{
	int		i = 0;
	char	*str = "54salut444ca8452va0123et56";
	char	*charset = "0123456789";
	char	**re;

	re = ft_split(str, charset);
	while (re[i])
	{
		printf("%s\n", re[i]);
		i++;
	}
}
