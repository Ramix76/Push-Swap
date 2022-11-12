/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:32:48 by framos-p          #+#    #+#             */
/*   Updated: 2022/11/12 20:08:49 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/defines.h"

void	printlst(t_stack *a)
{
	t_stack	*temp;

	temp = ft_lstlast(a);
	while (temp)
	{
		ft_printf("valor num: %d index: %d\n", temp -> num, temp -> index);
		temp = temp -> prev;
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
	//swap(&a);
	push(&a, &b);
	push(&a, &b);
	push(&a, &b);
	ft_printf("stack a------------\n");
	printlst(a);
	ft_printf("stack b------------\n");
	printlst(b); 
}
