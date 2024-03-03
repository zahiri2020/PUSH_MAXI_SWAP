/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 09:48:21 by ezahiri           #+#    #+#             */
/*   Updated: 2024/03/01 11:46:46 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	pb(t_list **src, t_list **dest)
{
	t_list	*new;
	t_list	*tmp;

	if (!*src)
		return ;
	new = ft_lstnew((*src)->content, (*src)->i);
	if (!new)
		return ;
	ft_lstadd_front(dest, new);
	tmp = *src;
	*src = (*src)->next;
}
