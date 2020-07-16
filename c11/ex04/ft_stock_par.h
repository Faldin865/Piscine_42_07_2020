/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameliadedieu <ameliadedieu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 23:37:42 by ameliadedie       #+#    #+#             */
/*   Updated: 2019/05/18 16:54:49 by ameliadedie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

typedef struct s_stock_par 
{
	int size_param; 
	char *str;
	char *copy;
	char **tab;
}            t_stock_par;

struct s_stock_par *ft_param_to_tab(int ac, char **av);
char	**ft_split_whitespaces(char *str);
#endif