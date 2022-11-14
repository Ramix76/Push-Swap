/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:32:48 by framos-p          #+#    #+#             */
/*   Updated: 2022/11/14 13:03:32 by framos-p         ###   ########.fr       */
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
	//swap(&a, 'a');
	//swap(&a, 'a');
	//swap(&a, 'a');
	//push(&a, &b, 'b');
	//push(&a, &b, c);
	//push(&a, &b, c);
	rev_rotate(&a, 'a');
	//ft_printf("stack a------------\n");
	printlst(a);
	//ft_printf("stack b------------\n");
	//printlst(b); 
}
