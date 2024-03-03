/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_a_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:50:15 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/28 23:12:26 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rev_rot(t_list **lst)
{
	t_list	*head;
	t_list	*last;
	t_list	*before;

	if (!*lst || !(*lst)->next)
		return ;
	before = ft_lst_beforelast (*lst);
	head = *lst;
	last = ft_lstlast(*lst);
	last->next = head;
	*lst = last;
	before->next = NULL;
}

void	rrr(t_list **a, t_list **b)
{
	rev_rot(a);
	rev_rot(b);
	write (1, "rrr\n", 4);
}
