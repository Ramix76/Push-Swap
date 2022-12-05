/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defines.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:31:51 by framos-p          #+#    #+#             */
/*   Updated: 2022/12/05 15:21:42 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINES_H
# define DEFINES_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "../lib/LIBFT/inc/libft.h"
# include "../lib/Printf/includes/ft_printf.h"

size_t	is_min(t_stack **a, size_t n);
size_t	is_max(t_stack **a, size_t n);
size_t	find_smallest(t_stack **a);
size_t	find_biggest(t_stack **a);
int		stack_in_order(t_stack **a);
int		check_args(char **argv);
int		check_doubles(char **argv);
int		check_size(char **argv);
void	sort_max1(t_stack **a, t_stack **b, t_stack *temp);
void	sort_max2(t_stack **a, t_stack **b, t_stack *temp);
void	check_order_stack_a(t_stack **a);
void	hundred_numbers(t_stack **a, t_stack **b, size_t chunks);
void	move_to_b(t_stack **a, t_stack **b, size_t cut);
void	return_to_a(t_stack **a, t_stack **b);
void	min_num_on_top(t_stack **a, char c);
void	max_num_on_top(t_stack **a, t_stack **b);
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
