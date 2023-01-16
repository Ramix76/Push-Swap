/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:20:56 by framos-p          #+#    #+#             */
/*   Updated: 2023/01/09 16:03:20 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/defines.h"

t_stack	*init(char **argv)
{
	t_stack	*a;
	int		i;
	t_stack	*temp;

	i = 1;
	a = ft_lstnew(ft_atoi(argv[i]));
	if (!a)
		exit (1);
	i++;
	while (argv[i])
	{
		temp = ft_lstnew(ft_atoi(argv[i]));
		if (!temp)
			exit (1);
		ft_lstadd_back(&a, temp);
		i++;
	}
	indexation(&a);
	return (a);
}

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
