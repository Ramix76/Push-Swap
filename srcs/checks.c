/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:40:49 by framos-p          #+#    #+#             */
/*   Updated: 2022/11/07 16:57:46 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/defines.h"

int	check_size(char **argv)
{


int	check_doubles(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 1;
		printf("valor:%s\n", argv[i]);
		while (i - j > 0)
		{
			if (i > 1 && (!ft_strncmp(argv[i], argv[i - j], 11)))
			{
				printf("%s\n", argv[i]);
				ft_error();
				return (0);
			}
			j++;
		}
		i++;
	}
	return (0);
}

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
