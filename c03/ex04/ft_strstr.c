/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 10:34:55 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/05 13:59:57 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int n;

	n = 0;
	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		while (str[i] == to_find[n] && to_find[n])
		{
			i++;
			n++;
		}
		if (to_find[n] == '\0')
			return (&str[i - n]);
		else
		{
			i = i - n;
			n = 0;
		}
		i++;
	}
	return (0);
}
