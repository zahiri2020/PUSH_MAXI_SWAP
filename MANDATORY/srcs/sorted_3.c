/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 07:54:44 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/26 18:35:40 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sorted_3(t_list **lst)
{
	int	a;
	int	b;
	int	c;

	a = (*lst)->content;
	b = (*lst)->next->content;
	c = (*lst)->next->next->content;
	if (a > b && b < c && a < c)
		sa(lst);
	else if (a < b && b > c && a < c)
	{
		rra (lst);
		sa(lst);
	}
	else if (a < b && b > c && a > c)
		rra(lst);
	else if (a > b && b < c && a > c)
		ra(lst);
	else if (a > b && b > c && a > c)
	{
		sa (lst);
		rra(lst);
	}
}
