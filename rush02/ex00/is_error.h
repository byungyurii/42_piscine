/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_error.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 04:03:21 by seonhong          #+#    #+#             */
/*   Updated: 2020/11/01 18:53:53 by wonjlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS_ERROR_H
# define IS_ERROR_H
# include "boolean.h"

t_bool		dict_error(char *buff, int *row);

t_bool		input_error(int argc, char **argv);

#endif
