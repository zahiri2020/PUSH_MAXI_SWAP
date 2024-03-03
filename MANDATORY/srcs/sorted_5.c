/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 22:45:53 by ezahiri           #+#    #+#             */
/*   Updated: 2024/03/01 11:46:46 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	check_pos(t_list *lst, int pos)
{
	int		i;
	int		size;
	t_list	*tmp;

	tmp = lst;
	size = ft_lstsize(lst);
	i = 0;
	while (i < size / 2)
	{
		if (tmp->i == pos)
			return (1);
		tmp = tmp->next;
		i++;
	}
	return (0);
}

void	push_max_min(t_list **a, t_list **b)
{
	if (check_pos(*a, 0))
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
	if (check_pos(*a, ft_lstsize(*a)))
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
