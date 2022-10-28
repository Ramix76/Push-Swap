/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:32:48 by framos-p          #+#    #+#             */
/*   Updated: 2022/10/28 11:02:12 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "defines.h"

int	main(int argc, char **argv)
{
	
	if (argc == 1)
		return (0);

//	check_input(argv);
	check_args(argv);
//	check_doubles(argv);
}
