/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sorted.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 23:40:40 by ezahiri           #+#    #+#             */
/*   Updated: 2024/03/05 22:42:21 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sorting(t_list	**a, t_list **b)
{
	int	max;

	max = ft_lstlast(*a)->i;
	while (*b)
	{
		if ((*a)->i - 1 == (*b)->i)
			pa(b, a);
		else if ((*a)->i - 1 == ft_lstlast(*b)->i)
			(rrb(b), pa(b, a));
		else if (ft_lstlast(*a)->i == max)
			(pa(b, a), ra(a));
		else if (ft_lstlast(*a)->i < (*b)->i)
			(pa(b, a), ra(a));
		else if (ft_lstlast(*a)->i < ft_lstlast(*b)->i)
			(rrb(b), pa(b, a), ra(a));
		else if (ft_lstlast(*a)->i == (*a)->i - 1)
			rra(a);
		else if (*b && best_move(*b, (*a)->i - 1))
			rb(b);
		else
			rrb(b);
	}
}

void	ft_a_to_b(t_list **a, t_list **b)
{
	int	pv2;
	int	pv1;
	int	md;

	md = 0;
	pv1 = 0;
	pv2 = 0;
	while (ft_lstsize(*a) > 3)
	{
		md = pv1;
		pv2 = ft_lstsize(*a) / 6 + pv1;
		pv1 = ft_lstsize(*a) / 3 + pv1;
		while (ft_lstsize(*b) < pv1)
		{
			if (*a && (*a)->i < pv1)
				pb(a, b);
			else
				ra(a);
			if (*b && (*a)->i >= pv1 && (*b)->i >= md && (*b)->i < pv2)
				rr(a, b);
			if (*b && (*b)->i >= md && (*b)->i < pv2)
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
