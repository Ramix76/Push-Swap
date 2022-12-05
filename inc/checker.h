/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:34:30 by framos-p          #+#    #+#             */
/*   Updated: 2022/12/05 17:26:30 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "../lib/LIBFT/inc/libft.h"
# include "../lib/Printf/includes/ft_printf.h"

size_t	is_min(t_stack **a, size_t n);
size_t	is_max(t_stack **a, size_t n);
size_t	find_smallest(t_stack **a);
size_t	find_biggest(t_stack **a);
void	stack_in_order(t_stack *a, t_stack *b);
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
void	swap(t_stack **lst);
void	push(t_stack **a, t_stack **b);
void	rotate(t_stack **lst);
void	rev_rotate(t_stack **lst);
void	ft_error(void);
void	incorrect(t_stack *a, t_stack *b);
void	read_instructions(char *lie, t_stack *a, t_stack *b, int *move);
void	reading(t_stack *a, t_stack *b, int *move);
t_stack	*init(char **argv);

#endif
