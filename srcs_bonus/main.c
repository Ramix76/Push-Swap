/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:32:48 by framos-p          #+#    #+#             */
/*   Updated: 2022/12/15 12:24:43 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"

static void	free_list(t_stack **lst)
{
	t_stack	*temp;

	while (*lst)
	{
		temp = (*lst)-> next;
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		move;

		move = 0;
	if (argc <= 1)
		return (0);
	check_args(argv);
	check_doubles(argv);
	check_size(argv);
	a = init(argv);
	b = NULL;
	reading(&a, &b, &move);
	stack_in_order(&a, &b);
	exit(1);
}

void	reading(t_stack **a, t_stack **b, int *move)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		read_instructions(line, a, b, move);
		if (*move == 1)
		{
			free(line);
			if (ft_lstsize(*a) > 0)
				free_list(a);
			if (ft_lstsize(*b) > 0)
				free_list(b);
			ft_error();
		}
		free(line);
		line = get_next_line(0);
	}
	free(line);
}

void	stack_in_order(t_stack **a, t_stack **b)
{
	t_stack	*first;
	t_stack	*second;
	int		i;

	first = *a;
	if (ft_lstsize((*b)) != 0)
		incorrect(*a, *b);
	i = 0;
	while (first -> next)
	{
		second = first -> next;
		if (first -> index >= second -> index)
			i++;
		first = second;
	}
	if (i == 0)
	{
		write(1, "OK", 2);
		write(1, "\n", 1);
		return ;
	}
	incorrect(*a, *b);
}

void	incorrect(t_stack *a, t_stack *b)
{
	if (ft_lstsize(a) > 0)
		free_list(&a);
	if (ft_lstsize(b) > 0)
		free_list(&b);
	write(1, "KO", 2);
	write(1, "\n", 1);
	exit(1);
}
