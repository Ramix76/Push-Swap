/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:49:02 by framos-p          #+#    #+#             */
/*   Updated: 2022/11/18 20:18:12 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/defines.h"

void	swap(t_stack **lst, char c)
{
	t_stack	*temp;
	t_stack	*temp2;

	temp = *lst;
	temp2 = temp -> next;
	if (temp -> next == 0)
		return ;
	temp -> next = temp2 -> next;
	temp -> prev = temp2;
	if (temp2 -> next != 0)
		temp2 -> next -> prev = temp;
	temp2 -> next = temp;
	temp2 -> prev = NULL;
	*lst = temp2;
	if (c)
		ft_printf("s%c\n", c);
}

void	push(t_stack **a, t_stack **b, char c)
{
	t_stack	*temp;

	temp = *a;
	*a = (*a)-> next;
	if (*a)
		(*a)-> prev = NULL;
	temp -> next = *b;
	if (*b)
		(*b)-> prev = temp;
	*b = temp;
	if (c)
		ft_printf("p%c\n", c);
}

void	rotate(t_stack **lst, char c)
{
	t_stack	*temp;
	t_stack	*last;

	temp = *lst;
	temp -> next -> prev = NULL;
	*lst = temp -> next;
	last = ft_lstlast(*lst);
	last -> next = temp;
	temp -> prev = last;
	temp -> next = NULL;
	if (c)
		ft_printf("r%c\n", c);
}

void	rev_rotate(t_stack **lst, char c)
{
	t_stack	*temp;
	t_stack	*last;

	temp = *lst;
	last = ft_lstlast(*lst);
	last -> prev -> next = NULL;
	last -> prev = NULL;
	*lst = last;
	last -> next = temp;
	temp -> prev = last;
	if (c)
		ft_printf("rr%c\n", c);
}
