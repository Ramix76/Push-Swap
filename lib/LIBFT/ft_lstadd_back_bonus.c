/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 18:27:41 by framos-p          #+#    #+#             */
/*   Updated: 2022/11/12 19:40:42 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*temp;

	if (lst && new)
	{	
		if (*lst == NULL)
			*lst = new;
		else
		{
			temp = ft_lstlast(*lst);
			new -> prev = temp;
			temp-> next = new;
		}
	}
}
