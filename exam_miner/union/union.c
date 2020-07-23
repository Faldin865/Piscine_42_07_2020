/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 20:31:39 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/22 20:39:45 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_union(char *s1, char *s2)
{
	int		dic[256];
	int		i;

	i = 0;
	while (s1[i])
	{
		if (dic[(int)s1[i]] == 0)
		{
			dic[(int)s1[i]] = 1;
			ft_putchar(s1[i]);
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (dic[(int)s2[i]] == 0)
		{
			dic[(int)s2[i]] = 1;
			ft_putchar(s2[i]);
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_union(av[1], av[2]);
	}
	ft_putchar('\n');
	return (0);
}
