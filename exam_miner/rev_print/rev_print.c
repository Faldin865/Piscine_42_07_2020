/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 18:58:58 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/22 19:03:13 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while(str[i])
		i++;
	return (i - 1);
}

int		main(int ac, char **av)
{
	int		i;
	int		n;

	i = 0;
	if (ac == 2)
	{
		n = ft_strlen(av[1]);
		while (n >= 0)
		{
			ft_putchar(av[1][n]);
			n--;
		}
	}
	ft_putchar('\n');
	return (0);
}

