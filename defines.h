/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defines.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:31:51 by framos-p          #+#    #+#             */
/*   Updated: 2022/10/28 11:35:52 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINES_H
# define DEFINES_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/*typedef struct s_stack
{
	int				num;
	size_t			index;
	struct s_stack	*next;
}					t_stack;
*/

//size_t	check_input(char **input);
int	check_args(char **args);
//int  ┊check_doubles(char **args);

#endif
