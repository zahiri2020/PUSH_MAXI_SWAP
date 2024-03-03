/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 03:40:34 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/28 23:12:38 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_list **lst)
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
	write (1, "rrb\n", 4);
}
