/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 18:31:00 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/19 14:09:02 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

void		ft_div(int n1, int n2);
void		ft_mod(int n1, int n2);
void		ft_plus(int n1, int n2);
void		ft_minus(int n1, int n2);
void		ft_multip(int n1, int n2);
int			ft_atoi(char *str);
void		ft_error(int cas);
void		ft_putnbr(int nb);
void		ft_prob(void);
void		ft_putchar(char c);

#endif
