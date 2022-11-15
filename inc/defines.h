/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defines.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:31:51 by framos-p          #+#    #+#             */
/*   Updated: 2022/11/15 13:02:59 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINES_H
# define DEFINES_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "../lib/LIBFT/libft.h"
# include "../lib/Printf/includes/ft_printf.h"

int		is_min(t_stack **lst);
int		stack_in_order(t_stack **a);
int		check_args(char **argv);
int		check_doubles(char **argv);
int		check_size(char **argv);
void	resolve(t_stack **a, t_stack **b, int argc); 
void	two_numbers(t_stack **a, char c);
void	three_numbers(t_stack **a, char c);
void	five_numbers(t_stack **a, t_stack **b);
void	indexation(t_stack **lst);
void	swap(t_stack **lst, char c);
void	push(t_stack **a, t_stack **b, char c);
void	rotate(t_stack **lst, char c);
void	rev_rotate(t_stack **lst, char c);
void	ft_error(void);
t_stack	*init(char **argv);

#endif
