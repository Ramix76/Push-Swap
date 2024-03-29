/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:32:48 by framos-p          #+#    #+#             */
/*   Updated: 2023/01/16 10:55:55 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/defines.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc == 1)
		return (0);
	check_args(argv);
	check_doubles(argv);
	check_size(argv);
	a = init(argv);
	b = NULL;
	if (stack_in_order(&a))
		resolve(&a, &b, argc);
	exit(1);
}

int	stack_in_order(t_stack **a)
{
	t_stack	*first;
	t_stack	*second;

	first = *a;
	while (first -> next)
	{
		second = first -> next;
		if (first -> index > second -> index)
			return (1);
		first = second;
	}
	return (0);
}

void	resolve(t_stack **a, t_stack **b, int argc)
{
	int	count;

	count = 0;
	if (argc - 1 == 2)
		two_numbers(a, 'a');
	else if (argc - 1 == 3)
		three_numbers(a, 'a');
	else if (argc - 1 <= 5)
		five_numbers(a, b);
	else if (argc - 1 < 21)
		hundred_numbers(a, b, 1, count);
	else if (argc - 1 <= 100)
		hundred_numbers(a, b, 5, count);
	else if (argc - 1 <= 500)
		hundred_numbers(a, b, 8, count);
}
