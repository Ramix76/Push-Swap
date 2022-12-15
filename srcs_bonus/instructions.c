/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:50:12 by framos-p          #+#    #+#             */
/*   Updated: 2022/12/15 12:24:32 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"

static void	ss_instruction(t_stack **a, t_stack **b)
{
	swap(b);
	swap(a);
}

static void	rrr_instruction(t_stack **a, t_stack **b)
{
	rev_rotate(a);
	rev_rotate(b);
}

static void	rr_instruction(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
}

void	read_instructions(char *line, t_stack **a, t_stack **b, int *no_move)
{
	if (!ft_strncmp(line, "sa\n", 5))
		swap(a);
	else if (!ft_strncmp(line, "sb\n", 5))
		swap(b);
	else if (!ft_strncmp(line, "sb\n", 5) && !ft_strncmp(line, "sa\n", 5))
		ss_instruction(a, b);
	else if (!ft_strncmp(line, "rra\n", 5))
		rev_rotate(a);
	else if (!ft_strncmp(line, "rrb\n", 5))
		rev_rotate(b);
	else if (!ft_strncmp(line, "rrb\n", 5) && !ft_strncmp(line, "rra\n", 5))
		rrr_instruction(a, b);
	else if (!ft_strncmp(line, "ra\n", 5))
		rotate(a);
	else if (!ft_strncmp(line, "rb\n", 5))
		rotate(b);
	else if (!ft_strncmp(line, "rb\n", 5) && !ft_strncmp(line, "ra\n", 5))
		rr_instruction(a, b);
	else if (!ft_strncmp(line, "pa\n", 5))
		push(b, a);
	else if (!ft_strncmp(line, "pb\n", 5))
		push(a, b);
	else
		*no_move = 1;
}
