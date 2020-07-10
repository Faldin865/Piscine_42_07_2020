/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 19:25:13 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/10 11:32:49 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

#include <stdio.h>

int		main(void)
{
	char *nbr = "-18";
	char *base_from = "0123456789";
	char *base_to = "0123456789ABCDEF";

	printf("%s\n", ft_convert_base(nbr, base_from, base_to));
}
