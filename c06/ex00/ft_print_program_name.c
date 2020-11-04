/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:23:15 by gbyun             #+#    #+#             */
/*   Updated: 2020/11/05 02:45:37 by gbyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	while (*argv[argc - 1])
		write(1, argv[0]++, 1);
	write(1, "\n", 1);
	return (0);
}
