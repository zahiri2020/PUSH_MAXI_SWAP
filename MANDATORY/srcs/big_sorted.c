/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sorted.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 23:40:40 by ezahiri           #+#    #+#             */
/*   Updated: 2024/03/01 11:56:43 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_a_to_b(t_list **a, t_list **b)
{
	int	ch2;
	int	ch1;
	int	md;

	md = 0;
	ch1 = 0;
	ch2 = 0;
	while (ft_lstsize(*a) > 3)
	{
		md = ch1;
		ch2 = ft_lstsize(*a) / 6 + ch1;
		ch1 = ft_lstsize(*a) / 3 + ch1;
		while (ft_lstsize(*b) < ch1)
		{
			if (*a && (*a)->i < ch1)
				pb(a, b);
			else
				ra(a);
			if (*b && (*a)->i >= ch1 && (*b)->i >= md && (*b)->i < ch2)
				rr(a, b);
			if (*b && (*b)->i >= md && (*b)->i < ch2)
				rb(b);
		}
	}
}

void	big_sort(t_list **a, t_list **b)
{
	ft_a_to_b(a, b);
	ft_sorted_3(a);
	sorting(a, b);
	while (is_sorted(*a))
		rra(a);
}
