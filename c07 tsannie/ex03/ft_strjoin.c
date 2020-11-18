/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 06:44:33 by tsannie           #+#    #+#             */
/*   Updated: 2020/07/16 12:04:13 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		compteur(int size, char **strs, char *sep)
{
	int i;
	int e;
	int n;
	int res;

	res = 0;
	e = 0;
	n = 0;
	i = 0;
	while (e != size)
	{
		while (strs[e][i] != '\0')
			i++;
		res = res + i;
		i = 0;
		e++;
	}
	while (sep[n])
		n++;
	n = n * (size - 1);
	res = res + n;
	return (res);
}

char	*casing(int global_size, char **strs, char *sep, char *res)
{
	int i;
	int e;
	int n;

	i = 0;
	e = 0;
	n = 0;
	while (n != global_size)
	{
		while (strs[e][i])
		{
			res[n] = strs[e][i];
			i++;
			n++;
		}
		e++;
		i = 0;
		while (sep[i] && n != global_size)
			res[n++] = sep[i++];
		i = 0;
	}
	res[global_size] = '\0';
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*res;
	int		global_size;
	int		e;
	int		n;

	if (size == 0)
	{
		if (!(res = malloc(sizeof(char) * 1)))
			return (0);
		res[0] = '\0';
		return (res);
	}
	n = 0;
	e = 0;
	global_size = compteur(size, strs, sep);
	i = 0;
	if (!(res = malloc(sizeof(char) * global_size + 1)))
		return (0);
	return (casing(global_size, strs, sep, res));
}


#include <stdio.h>
#include <stdlib.h>
int main(int ac, char *av[])
{
	char **tab;
	int i;
	if (ac != 3)
		return (-1);
	tab = ft_split(av[1], av[2]);
	i = 0;
	while (tab[i] != 0)
	{
		printf("tab[%d]\t=\t\"%s\"\n", i, tab[i]);
		free(tab[i]);
		i++;
	}
	printf("tab[%d]\t=\t%s\n\n", i, tab[i]);
	free(tab[i]);
	free(tab);
	return (0);
}