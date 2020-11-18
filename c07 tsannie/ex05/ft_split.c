/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 14:26:58 by tsannie           #+#    #+#             */
/*   Updated: 2020/07/16 15:04:08 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		be_charset_len(char *charset, char cara, char *str, int z)
{
	int n;
	int i;

	if (z == 0)
	{
		n = 0;
		while (charset[n])
		{
			if (cara == charset[n])
				return (1);
			n++;
		}
		return (0);
	}
	if (z == 1)
	{
		i = 0;
		while (str[i])
			i++;
		return (i);
	}
	return (0);
}

int		nb_letres(int mot_cherche, char *str, char *charset)
{
	int i;
	int mot;
	int e;

	i = 0;
	mot = 0;
	while (be_charset_len(charset, str[i], str, 0) == 1)
		i++;
	while (mot != mot_cherche)
	{
		e = 0;
		if ((be_charset_len(charset, str[i], str, 0) == 0
		&& be_charset_len(charset, str[i - 1], str, 0) == 1) || mot == 0)
		{
			while (be_charset_len(charset, str[i], str, 0) == 0 && str[i])
			{
				e++;
				i++;
			}
			mot++;
		}
		if (be_charset_len(charset, str[i], str, 0) == 1)
			i++;
	}
	return (e);
}

int		compteur_mots(int size, char *str, char *charset)
{
	int res;
	int i;
	int start;

	res = 0;
	i = 0;
	start = 0;
	while (start == 0)
	{
		if (i == size)
			return (0);
		if (be_charset_len(charset, str[i], str, 0) == 0)
		{
			start = 1;
			res++;
		}
		i++;
	}
	while (i != size)
	{
		if (be_charset_len(charset, str[i++], str, 0) == 0
		&& be_charset_len(charset, str[i - 2], str, 0) == 1)
			res++;
	}
	return (res);
}

char	*insert(int mot_cherche, char *str, char *charset)
{
	int		i;
	int		mot;
	int		e;
	char	*res;

	res = malloc((sizeof(char)) * 4 * nb_letres(mot_cherche, str, charset) + 1);
	i = 0;
	mot = 0;
	while (be_charset_len(charset, str[i], str, 0) == 1)
		i++;
	while (mot != mot_cherche)
	{
		e = 0;
		if ((be_charset_len(charset, str[i], str, 0) == 0
		&& be_charset_len(charset, str[i - 1], str, 0) == 1) || mot == 0)
		{
			while (be_charset_len(charset, str[i], str, 0) == 0 && str[i])
				res[e++] = str[i++];
			res[e] = '\0';
			mot++;
		}
		if (be_charset_len(charset, str[i], str, 0) == 1)
			i++;
	}
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	int		size;
	int		i;
	char	**res;
	int		nb_mots;

	i = 0;
	size = be_charset_len(charset, 'a', str, 1);
	nb_mots = compteur_mots(size, str, charset);
	if (size == 0 || nb_mots == 0)
	{
		res = malloc((sizeof(char *)));
		res[0] = 0;
		return (res);
	}
	res = malloc((sizeof(char*)) * (nb_mots + 1));
	while (i < nb_mots)
	{
		res[i] = malloc((sizeof(char)) * (nb_letres(i + 1, str, charset) + 1));
		res[i] = insert(i + 1, str, charset);
		i++;
	}
	res[i] = 0;
	return (res);
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