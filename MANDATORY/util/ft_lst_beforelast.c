/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_beforelast.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 03:04:28 by ezahiri           #+#    #+#             */
/*   Updated: 2024/03/04 23:46:40 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lst_beforelast(t_list *lst)
{
	t_list	*tmp;

	if (!lst && ft_lstsize(lst) < 2)
		return (NULL);
	tmp = lst;
	while (tmp->next->next)
		tmp = tmp->next;
	return (tmp);
}
