/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:47:27 by pgorner           #+#    #+#             */
/*   Updated: 2023/03/03 15:07:17 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	ft_exit(char *c, int exc)
{
	ft_printf(c);
	exit(exc);
}

void	get_val(char **argv, t_v *v)
{
	int	i;
	
	i = 0;
	while (argv[++i])
		check_args(argv);
	v->np = argv[1];
	v->td = argv[2];
	v->te = argv[3];
	v->ts = argv[4];
	v->ne = argv[5];
}

int	main(int argc, char **argv)
{
	t_v	v;

	if (argc == 6)
		get_val(argv, &v);
	else
		ft_exit("Invalid input", 127);
	gettimeofday
}