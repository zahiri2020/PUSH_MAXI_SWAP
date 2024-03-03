/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_a_b_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:06:02 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/27 18:15:22 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	ft_swap(t_list **lst)
{
	t_list	*tmp;
	t_list	*head;

	if (!*lst || !(*lst)->next)
		return ;
	head = *lst;
	tmp = *lst;
	*lst = (*lst)->next;
	tmp->next = (*lst)->next;
	(*lst)->next = head;
}

void	ss(t_list **a, t_list **b)
{
	ft_swap(a);
	ft_swap(b);
}
