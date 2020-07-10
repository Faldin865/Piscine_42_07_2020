/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 12:18:31 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/07 17:19:51 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	if (s1[i] < s2[i])
		return (-1);
	else
		return (1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		n;
	char	*str;

	i = 1;
	n = 0;
	if (argc < 2)
		return (0);
	while (n + (++i) != argc)
		if (ft_strcmp(argv[i], argv[i + n]) > 0)
		{
			str = argv[i];
			argv[i] = argv[i + n];
			argv[i + n] = str;
			i = 0;
		}
	while (n < argc)
	{
		i = -1;
		while (argv[n][++i])
			ft_putchar(argv[n][i]);
		ft_putchar('\n');
		n++;
	}
	return (0);
}
