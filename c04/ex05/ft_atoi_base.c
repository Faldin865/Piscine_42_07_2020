/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 20:59:02 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/04 21:15:48 by gpaul            ###   ########.fr       */
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
		while (base[i] != base [i + 1] && base[i] &&
				base[i] != '-' && base[i] != '+' &&
				base[i] == ' ' && (base[i] >= 9 && base[i] <= 13))
					i++;
	if (i < 2 || base[i] != '\0')
		return (-1);
	else
		return (1);
}

int ft_atoi_base(char *str, char *base)
{

	int i;
	int re;
	int sign;
	int n;

	n = ft_strlen(base);
	i = 0;
	re = 0;
	sign = 0;
	if (ft_check_base(base))
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			re = re * 10 + (str[i] - '0');
			i++;
		}
		return (sign % 2 == 0 ? re : -re);
	}
}
