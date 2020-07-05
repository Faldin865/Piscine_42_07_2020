/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 20:59:02 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/05 19:56:55 by gpaul            ###   ########.fr       */
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

	i = 0;
		while (base[i] != base[i + 1] && base[i] &&
				base[i] != '-' && base[i] != '+' &&
				base[i] != ' ' && (!(base[i] >= 9 && base[i] <= 13)))
					i++;
	if (i < 2 || base[i] != '\0')
		return (-1);
	else
		return (1);
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
	while (base[i])
	{
		return (i);
	}
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int re;
	int sign;
	int n;

	n = ft_strlen(base);
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
			re *= n;
			re = base[ft_in_base(str[i], base)];
			i++;
		}
	}
	return (re);
}
