/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 18:28:37 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/22 18:37:01 by gpaul            ###   ########.fr       */
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
	return (i);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 4)
	{
		if (ft_strlen(argv[2]) != 1 || ft_strlen(argv[3]) != 1)
		{
			ft_putchar('\n');
			return (0);
		}
		while (argv[1][i])
		{
			if (argv[1][i] == argv[2][0])
			{
				ft_putchar(argv[3][0]);
			}
			else
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
