/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:24:23 by ezahiri           #+#    #+#             */
/*   Updated: 2024/03/05 21:25:47 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	best_move(t_list *lst, int pos)
{
	int		i;
	int		size;
	t_list	*tmp;

	tmp = lst;
	size = ft_lstsize(lst);
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
