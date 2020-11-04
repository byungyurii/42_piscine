/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:33:01 by seonhong          #+#    #+#             */
/*   Updated: 2020/11/01 18:46:53 by wonjlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_H
# define READ_H
# include "boolean.h"

t_bool		ft_read(char *dict, long long k);
int			ft_read_size(char *dict, int *colsize);

#endif
