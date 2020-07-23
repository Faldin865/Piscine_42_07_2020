/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 20:00:12 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/19 14:08:28 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	int n1;
	int n2;

	if (argc == 4)
	{
		n1 = ft_atoi(argv[1]);
		n2 = ft_atoi(argv[3]);
		if (argv[2][0] == '/')
			ft_div(n1, n2);
		else if (argv[2][0] == '%')
			ft_mod(n1, n2);
		else if (argv[2][0] == '+')
			ft_plus(n1, n2);
		else if (argv[2][0] == '-')
			ft_minus(n1, n2);
		else if (argv[2][0] == '*')
			ft_multip(n1, n2);
		else
			ft_prob();
		ft_putchar('\n');
	}
	return (0);
}
