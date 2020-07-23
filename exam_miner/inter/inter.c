/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 20:11:11 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/22 20:23:50 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	inter(char *s1, char *s2)
{
	int		dic[256];
	int		i;
	int		n;

	i = 0;
	while(s1[i])
	{
		n = 0;
		if (dic[(int)s1[i]] == 0)
		{
			while (s2[n] && s2[n] != s1[i])
				n++;
			if (s2[n] != '\0' && s2[n] == s1[i] && dic[(int)s1[i]] == 0)
			{
				dic[(int)s1[i]] = 1;
				write(1, &s1[i], 1);
			}
		}
		i++;
	}
}


int		main(int ac, char **av)
{
	if ( ac == 3)
	{
		inter(av[1], av[2]);
	}
	write(1, "\n", 1);
	return (0);
}
