/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 11:45:52 by gpaul             #+#    #+#             */
/*   Updated: 2020/10/14 19:11:35 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int n;
	unsigned int i;

	n = 0;
	i = 0;
	while (dest[i])
		i++;
	if (size <= i)
		return (size + ft_strlen(src));
	while (src[n] && i + n + 1 < size)
	{
		dest[i + n] = src[n];
		n++;
	}
	if (i != size)
		dest[i + n] = '\0';
	return (i + ft_strlen(src));
}
