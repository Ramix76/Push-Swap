/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:32:48 by framos-p          #+#    #+#             */
/*   Updated: 2022/11/19 13:05:22 by framos-p         ###   ########.fr       */
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
	ft_printf("Stack A:-----------\n");
	printlst(a);
	ft_printf("Smallest is: %d\n", find_smallest(&a));
	ft_printf("Biggest is: %d\n", find_biggest(&a));
	if (stack_in_order(&a))
		resolve(&a, &b, argc);
	printlst(a);
	ft_printf("Stack B:-----------\n");
	printlst(b);
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
	if (argc - 1 == 2)
		two_numbers(a, 'a');
	else if (argc - 1 == 3)
		three_numbers(a, 'a');
	else if (argc - 1 == 5)
		five_numbers(a, b);
}
