/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonghong@student.42seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:55:05 by seonhong          #+#    #+#             */
/*   Updated: 2020/11/01 20:07:42 by wonjlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hash.h"
#include "string.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

t_node	*g_hash_table[HASH_SIZE];

int		ft_hashcode(char *str_key)
{
	int		key;
	int		num;

	num = ft_strlen(str_key);
	key = 0;
	while (*str_key)
	{
		key = key + (key * num + *(str_key++));
		key %= HASH_SIZE;
	}
	return (key);
}

void	ft_node_add(char *key_num, char *value)
{
	int			key;
	t_node		*new_node;

	new_node = (t_node*)malloc(sizeof(t_node));
	if (!new_node)
	{
		write(1, "Error\n", 6);
		return ;
	}
	new_node->key_num = ft_strdup(new_node->key_num, key_num);
	new_node->value = ft_strdup(new_node->value, value);
	if (!(new_node->value) && !(new_node->value))
	{
		write(1, "Error\n", 6);
		return ;
	}
	new_node->next = NULL;
	key = ft_hashcode(key_num);
	ft_add_helper(key, new_node);
}

void	ft_add_helper(int key, t_node *new_node)
{
	t_node *next_node;

	if (g_hash_table[key] == NULL)
		g_hash_table[key] = new_node;
	else
	{
		next_node = g_hash_table[key];
		while (next_node)
		{
			if (ft_strcmp(new_node->value, next_node->value) == 0)
			{
				if (ft_strcmp(new_node->key_num, next_node->key_num) == 0)
					return ;
			}
			next_node = next_node->next;
		}
		new_node->next = g_hash_table[key];
		g_hash_table[key] = new_node;
	}
}

int		ft_hash_find(char *key_num, char **find_val)
{
	int			key;
	t_node		*node;

	key = ft_hashcode(key_num);
	node = g_hash_table[key];
	while (node)
	{
		if (ft_strcmp(node->key_num, key_num) == 0)
		{
			*find_val = node->value;
			return (1);
		}
		else
			node = node->next;
	}
	return (0);
}

void	ft_hash_init(void)
{
	int			idx;
	t_node		*cur;
	t_node		*tmp;
	char		*remove;

	idx = -1;
	while (++idx < HASH_SIZE)
	{
		cur = g_hash_table[idx];
		while (cur)
		{
			remove = cur->key_num;
			free(remove);
			remove = cur->value;
			free(remove);
			tmp = cur;
			cur = cur->next;
			free(tmp);
		}
		g_hash_table[idx] = NULL;
	}
}
