/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 06:03:28 by ezahiri           #+#    #+#             */
/*   Updated: 2024/03/01 12:01:28 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_best_move(t_list *b, int pos)
{
	int		i;
	int		size;
	t_list	*tmp;

	tmp = b;
	size = ft_lstsize(b);
	i = 0;
	while (i <= size / 2)
	{
		if (pos == tmp->i)
			return (1);
		i++;
		tmp = tmp->next;
	}
	return (0);
}

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
		else if (*b && ft_best_move(*b, (*a)->i - 1))
			rb(b);
		else
			rrb(b);
	}
}
