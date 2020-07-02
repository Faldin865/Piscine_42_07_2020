/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 14:43:20 by gpaul             #+#    #+#             */
/*   Updated: 2020/06/30 16:55:00 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char f, char s, char l)
{
	ft_putchar(f);
	ft_putchar(s);
	ft_putchar(l);
	if (f != '7' || s != '8' || l != '9')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char		f;
	char		s;
	char		l;

	f = '0';
	s = '1';
	l = '2';
	while (f <= '7')
	{
		while (s <= '8')
		{
			while (l <= '9')
			{
				ft_print(f, s, l);
				l++;
			}
			s++;
			l = s + 1;
		}
		s = f + 1;
		f++;
	}
}
