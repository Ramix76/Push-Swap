/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:32:48 by framos-p          #+#    #+#             */
/*   Updated: 2022/11/08 13:08:20 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/defines.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
		ft_error();
	check_args(argv);
	check_doubles(argv);
	check_size(argv);
}
