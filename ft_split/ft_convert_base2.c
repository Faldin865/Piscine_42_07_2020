/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 18:55:03 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/10 11:52:39 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_check_base(char *base)
{
	int i;
	int n;
	int x;

	n = 0;
	i = 0;
	while (base[i])
	{
		x = 0;
		if (base[i] == ' ' || base[i] == '-' || base[i] == '+'
				|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		while (base[x])
		{
			if (i != x && base[i] == base[x] && base[i] != '\0'
				&& base[x] != '\0')
				return (0);
			x++;
		}
		n++;
		i++;
	}
	return (n > 1 ? 1 : 0);
}

int		white_space(char c)
{
	if (c == ' ' && (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int		ft_in_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != c && base[i])
		i++;
	if (base[i] == '\0')
		return (0);
	else
		return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int re;
	int sign;

	i = 0;
	re = 0;
	sign = 0;
	if (ft_check_base(base) == 1)
	{
		while (white_space(str[i] == 1))
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign++;
			i++;
		}
		while (ft_in_base(str[i], base) > 0)
		{
			re = re * ft_strlen(base) + ft_in_base(str[i], base);
			i++;
		}
	}
	return (sign % 2 == 0 ? re : -re);
}
