/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonghong@student.42seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:11:01 by seonhong          #+#    #+#             */
/*   Updated: 2020/11/01 21:14:35 by wonjlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASH_H
# define HASH_H
# define HASH_SIZE 40

typedef struct			s_node	{
	char				*key_num;
	char				*value;
	struct s_node		*next;
}						t_node;

int						ft_hashcode(char *str_key);

void					ft_hash_init(void);

void					ft_node_add(char *key_num, char *value);

void					ft_add_helper(int key, t_node *new_node);

int						ft_hash_find(char *key_num, char **find_val);

char					*ft_cut_right(char *str, int range);

char					*ft_cut_left(char *str, int range);

char					*ft_cut_digit(char *input, int idx1);

int						ft_larger(char *input, int idx1, int idx2, int space);

int						ft_smaller_than_two(char *input_value, int space);

int						ft_smaller(char *input_value, int space);

int						ft_search(char *input, int space);

#endif
