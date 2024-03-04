/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:42:10 by ezahiri           #+#    #+#             */
/*   Updated: 2024/03/04 23:46:40 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	insert_position(t_list *new_node, t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	while (tmp)
	{
		if (new_node->content > tmp->content)
			new_node->i += 1;
		else
			tmp->i += 1;
		tmp = tmp->next;
	}
}

t_list	*ft_stack_new(int content, t_list **stack)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->i = 0;
	new_node->next = NULL;
	insert_position(new_node, stack);
	return (new_node);
}
