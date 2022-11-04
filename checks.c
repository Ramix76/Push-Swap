/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:40:49 by framos-p          #+#    #+#             */
/*   Updated: 2022/11/04 17:28:31 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "defines.h"

/*int  ┊check_doubles(char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i][j])
	{
		if (ft_strn
	}
	return (0);
}*/

int	check_args(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		if (argv[i][j] == '+' || argv[i][j] == '-')
			j++;
		if (argv[i][j] == '\0')
			ft_error();
		while (argv[i][j])
		{
			if ((argv[i][j] == '-' || argv[i][j] == '+') \
				|| (argv[i][j] >= '0' && argv[i][j] <= '9'))
				j++;
			else
				ft_error();
		}
		i++;
	}
	return (0);
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit (1);
}
