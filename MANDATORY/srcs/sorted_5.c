/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 22:45:53 by ezahiri           #+#    #+#             */
/*   Updated: 2024/03/05 21:30:34 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_max_min(t_list **a, t_list **b)
{
	if (best_move(*a, 0))
	{
		while ((*a)->i != 0)
			ra(a);
		pb(a, b);
	}
	else
	{
		while ((*a)->i != 0)
			rra(a);
		pb(a, b);
	}
	if (best_move(*a, ft_lstsize(*a)))
	{
		while ((*a)->i != ft_lstsize(*a))
			ra(a);
		pb(a, b);
	}
	else
	{
		while ((*a)->i != ft_lstsize(*a))
			rra(a);
		pb(a, b);
	}
}

void	ft_sorted_5(t_list **a, t_list **b)
{
	push_max_min(a, b);
	ft_sorted_3(a);
	pa (b, a);
	ra (a);
	pa(b, a);
}
