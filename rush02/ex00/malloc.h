/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:50:39 by seonhong          #+#    #+#             */
/*   Updated: 2020/11/01 22:49:13 by wonjlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MALLOC_H
# define MALLOC_H
# include "boolean.h"

t_bool	ft_create_str_num(int k, int rowsize, int colsize);

t_bool	ft_create_str_letter(int k, int rowsize, int colsize);

void	ft_free_str(char **str, long long len);

#endif
