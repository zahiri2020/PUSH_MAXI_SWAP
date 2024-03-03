/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:11:28 by ezahiri           #+#    #+#             */
/*   Updated: 2024/03/01 15:34:09 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

t_ins	*new_ins(void *content)
{
	t_ins	*new_node;

	new_node = (t_ins *)malloc(sizeof(t_ins));
	if (!new_node)
		return (NULL);
	new_node -> content = content;
	new_node -> next = NULL;
	return (new_node);
}

void	do_op(char *s, t_list **a, t_list **b)
{
	if (!ft_strcmp("pa\n", s))
		pa (b, a);
	else if (!ft_strcmp("pb\n", s))
		pb(a, b);
	else if (!ft_strcmp("ra\n", s))
		ra(a);
	else if (!ft_strcmp("rb\n", s))
		rb(b);
	else if (!ft_strcmp("rr\n", s))
		rr(a, b);
	else if (!ft_strcmp("sa\n", s))
		sa(a);
	else if (!ft_strcmp("sb\n", s))
		sb(b);
	else if (!ft_strcmp("ss\n", s))
		ss(a, b);
	else if (!ft_strcmp("rra\n", s))
		rra(a);
	else if (!ft_strcmp("rrb\n", s))
		rrb(b);
	else if (!ft_strcmp("rrr\n", s))
		rrr(a, b);
}

int	is_valid(char *s)
{
	if (!ft_strcmp("pa\n", s) || !ft_strcmp("pb\n", s))
		return (1);
	else if (!ft_strcmp("ra\n", s) || !ft_strcmp("rb\n", s))
		return (1);
	else if (!ft_strcmp("sa\n", s) || !ft_strcmp("sb\n", s))
		return (1);
	else if (!ft_strcmp("rra\n", s) || !ft_strcmp("rrb\n", s))
		return (1);
	else if (!ft_strcmp("rr\n", s) || !ft_strcmp("rrr\n", s))
		return (1);
	else if (!ft_strcmp("ss\n", s))
		return (1);
	else
		return (0);
}

void	ft_help(t_ins *all, t_list **a, t_list **b)
{
	t_ins	*tmp;

	tmp = NULL;
	tmp = all;
	while (tmp)
	{
		do_op(tmp->content, a, b);
		tmp = tmp->next;
	}
	clear_ins(&all);
}

void	ft_checker(t_list **a, t_list **b)
{
	t_ins	*lst;
	t_ins	*all;
	char	*s;

	s = get_next_line(0);
	lst = NULL;
	all = NULL;
	while (s)
	{
		if (!is_valid(s))
		{
			free(s);
			clear_ins(&all);
			write (1, "Error\n", 6);
			exit(1);
		}
		lst = new_ins(s);
		ins_back(&all, lst);
		s = get_next_line (0);
	}
	ft_help(all, a, b);
}
