/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:40:49 by framos-p          #+#    #+#             */
/*   Updated: 2022/10/25 13:21:44 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "defines.h"

/*int  ┊check_doubles(char **args)
{

}*/

int	check_args(char **args)
{
	int	i;
	int	j;

	i = 1;
	while (args[i])
	{
		j = 0;
		if ((args[i][j] >= '0' && args[i][j] <= '9') || ((args[i][j] == '-')
				&& (args[i][j + 1] >= '0' && args[i][j + 1] <= '9')))
		{
			printf("valor i1: %c\n valor j1: %c\n", args[i][j], args[i][j]);
			j++;
			printf("valor i2: %c\n valor j2: %c\n", args[i][j], args[i][j]);
			while (args[i][j] >= '0' && args[i][j] <= '9')
			{	
				j++;
				printf("valor i3: %c\n valor j3: %c\n", args[i][j], args[i][j]);
			}
			printf("valor I: %c\n valor J: %c\n", args[i][j], args[i][j]);
			if (args[i][j] != '\0')
				return (0);
		}
		else
		{
			printf("Error!!");
			return (0);
		}
		i++;
	}
	return (0);
}
