/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_back_ins.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:50:02 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/27 18:07:57 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

t_ins	*last_ins(t_ins *lst)
{
	t_ins	*tmp;

	tmp = lst;
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ins_back(t_ins **lst, t_ins *new)
{
	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
		last_ins(*lst)-> next = new;
}
