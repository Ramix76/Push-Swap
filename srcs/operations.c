/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:49:02 by framos-p          #+#    #+#             */
/*   Updated: 2022/11/12 20:08:47 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/defines.h"

void	swap(t_stack **lst)
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
}

void	push(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	temp = *a;
	*a = (*a) -> next;
	if (*a)
		(*a) -> prev = NULL;
	temp -> next = *b;
	if (*b)
		(*b) -> prev = temp;
	*b = temp;
}
