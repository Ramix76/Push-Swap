/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defines.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:31:51 by framos-p          #+#    #+#             */
/*   Updated: 2022/11/10 11:06:58 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINES_H
# define DEFINES_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "../lib/LIBFT/libft.h"
# include "../lib/Printf/includes/ft_printf.h"

void	ft_error(void);
int		check_args(char **argv);
int		check_doubles(char **argv);
int		check_size(char **argv);
t_stack	*init(char **argv);
void	indexation(t_stack **lst);

#endif
