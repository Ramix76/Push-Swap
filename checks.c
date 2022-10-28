/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:40:49 by framos-p          #+#    #+#             */
/*   Updated: 2022/10/28 11:35:46 by framos-p         ###   ########.fr       */
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
			j++;
			while (args[i][j] >= '0' && args[i][j] <= '9')
			{	
				j++;
			}
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


