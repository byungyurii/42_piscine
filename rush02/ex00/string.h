/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonghong@student.42seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:00:44 by seonhong          #+#    #+#             */
/*   Updated: 2020/11/01 20:34:28 by wonjlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H
# include "boolean.h"

int		ft_strlen(char *str);

void	ft_putstr(char *str);

int		ft_strcmp(char *s1, char *s2);

char	*ft_strdup(char *s1, char *s2);

void	ft_cut_string(char *buff, char **g_num, char **g_letter);

#endif
