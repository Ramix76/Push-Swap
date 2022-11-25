/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:20:56 by framos-p          #+#    #+#             */
/*   Updated: 2022/11/25 19:22:22 by framos-p         ###   ########.fr       */
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
