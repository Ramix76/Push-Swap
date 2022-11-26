/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:40:49 by framos-p          #+#    #+#             */
/*   Updated: 2022/11/26 19:00:18 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/defines.h"

int	check_size(char **argv)
{
	int		len;
	char	*max;
	char	*min;
	int		i;
	int		j;

	max = "2147483647";
	min = "-2147483648";
	i = 1;
	len = ft_strlen(argv[i]);
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (len > 11)
				ft_error();
			else if ((len == 11 && ft_strncmp(argv[i], min, 11) > 0)
				|| (len == 10 && ft_strncmp(argv[i], max, 10) > 0))
				ft_error();
			j++;
		}
		i++;
	}
	return (0);
}

int	check_doubles(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 1;
		while (i - j > 0)
		{
			if (i > 1 && (!ft_strncmp(argv[i], argv[i - j], 11)))
			{
				ft_error();
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
		if (argv[i][j] == '-')
			j++;
		if (argv[i][j] == '\0')
			ft_error();
		while (argv[i][j])
		{
			if ((argv[i][0] == '-' && j == 0) \
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
	exit (0);
}
