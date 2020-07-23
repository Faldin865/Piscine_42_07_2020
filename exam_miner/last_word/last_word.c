/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 19:10:17 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/22 19:28:32 by gpaul            ###   ########.fr       */
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

int		ft_blank(char c)
{
	if (c == '\t' || c == ' ')
		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	int		i;
	int		n;

	i = 0;
	if (ac == 2)
	{
		n = ft_strlen(av[1]);
		while (ft_blank(av[1][n]))
			n--;
		while (av[1][n - i] && (ft_blank(av[1][n - i]) == 0))
			i++;
		i--;
		while (av[1][n - i] && (ft_blank(av[1][n - i]) == 0))
		{
			ft_putchar(av[1][n - i]);
			i--;
		}
	}
	ft_putchar('\n');
	return (0);
}
