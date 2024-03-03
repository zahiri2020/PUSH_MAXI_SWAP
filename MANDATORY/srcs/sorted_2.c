/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:00:10 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/26 18:35:35 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sorted_2(t_list **lst)
{
	int	a;
	int	b;

	if (ft_lstsize(*lst) < 2)
		return ;
	a = (*lst)->content;
	b = (*lst)->next->content;
	if (a > b)
		sa(lst);
}
