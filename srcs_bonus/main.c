/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:32:48 by framos-p          #+#    #+#             */
/*   Updated: 2022/12/05 17:41:57 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		move;

	if (argc == 1)
		return (0);
	check_args(argv);
	check_doubles(argv);
	check_size(argv);
	a = init(argv);
	b = NULL;
	reading(a, b, &move);
	stack_in_order(a, b);
	exit(1);
}

void	reading(t_stack *a, t_stack *b, int *move)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		read_instructions(line, a, b, move);
		if (*move == 1)
		{
			free(line);
			if (ft_lstsize(a) > 0)
				exit(1);
			if (ft_lstsize(b) > 0)
				exit(1);
			ft_error();
		}
		free(line);
		line = get_next_line(0);
	}
	free(line);
}

void	stack_in_order(t_stack *a, t_stack *b)
{
	t_stack	*first;
	t_stack	*second;
	int		i;

	first = a;
	if (ft_lstsize(b) != 0)
		incorrect(a, b);
	i = 0;
	while (first -> next)
	{
		second = first -> next;
		if (first -> index > second -> index)
			i++;
		first = second;
	}
	if (i == 0)
	{
		write(1, "OK", 2);
		write(1, "\n", 1);
		return ;
	}
	incorrect(a, b);
}

void	incorrect(t_stack *a, t_stack *b)
{
	if (ft_lstsize(a) > 0)
		exit(1);
	if (ft_lstsize(b) > 0)
		exit(1);
	write(1, "0", 2);
	write(1, "\n", 1);
	exit(0);
}
