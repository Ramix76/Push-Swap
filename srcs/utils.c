/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:18:21 by framos-p          #+#    #+#             */
/*   Updated: 2022/11/10 11:08:33 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/defines.h"

static int	put_index(int ind, t_stack **lst)
{
	t_stack	*temp;
	int		i;

	i = 0;
	temp = *lst;
	while (temp)
	{
		if (temp -> num < ind)
			i++;
		temp = temp -> next;
	}
	return (i);
}

void	indexation(t_stack **lst)
{
	t_stack	*temp;

	temp = *lst;
	while (temp)
	{
		temp -> index = put_index(temp -> num, lst);
		temp = temp -> next;
	}
}
