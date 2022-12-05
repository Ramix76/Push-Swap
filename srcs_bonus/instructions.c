/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:50:12 by framos-p          #+#    #+#             */
/*   Updated: 2022/12/05 17:09:21 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"

void	read_instructions(char *line, t_stack *a, t_stack *b, int *no_move)
{
	if (!ft_strncmp(line, "sa\n", 5))
		swap(&a);
	else if (!ft_strncmp(line, "sb\n", 5))
		swap(&b);
	else if (!ft_strncmp(line, "rra\n", 5))
		rev_rotate(&a);
	else if (!ft_strncmp(line, "rrb\n", 5))
		rev_rotate(&b);
	else if (!ft_strncmp(line, "ra\n", 5))
		rotate(&a);
	else if (!ft_strncmp(line, "rb\n", 5))
		rotate(&b);
	else if (!ft_strncmp(line, "pa\n", 5))
		push(&b, &a);
	else if (!ft_strncmp(line, "pb\n", 5))
		push(&a, &b);
	else
		*no_move = 1;
}
