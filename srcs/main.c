/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:32:48 by framos-p          #+#    #+#             */
/*   Updated: 2022/11/14 16:18:10 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/defines.h"

void	printlst(t_stack *a)
{
	t_stack	*temp;

	temp = a;
	while (temp)
	{
		ft_printf("valor num: %d index: %d\n", temp -> num, temp -> index);
		temp = temp -> next;
	}
}

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
	printlst(a);
//	swap(&a, 'a');
	if (stack_in_order(&a))
		resolve(&a, &b, argc);
	printlst(a);
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
	(void)b;

	if (argc - 1 == 2)
		two_numbers(a, 'a');
	else if (argc - 1 == 3)
		three_numbers(
}
