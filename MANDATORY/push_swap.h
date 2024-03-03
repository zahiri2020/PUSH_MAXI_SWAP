/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:23:39 by ezahiri           #+#    #+#             */
/*   Updated: 2024/03/01 11:53:42 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../util/ft_util.h"

void	pa(t_list **src, t_list **dest);
void	pb(t_list **src, t_list **dest);
void	sa(t_list **lst);
void	sb(t_list **lst);
void	ra(t_list **lst);
void	rb(t_list **lst);
void	rr(t_list **a, t_list **b);
void	rra(t_list **lst);
void	rrb(t_list **lst);
void	rrr(t_list **a, t_list **b);

// sorted
void	ft_sorted_3(t_list **lst);
void	ft_sorted_2(t_list **lst);
void	ft_sorted_5(t_list **a, t_list **b);
void	big_sort(t_list **a, t_list **b);
void	sorting(t_list **a, t_list **b);
int		is_sorted(t_list *stack_a);

#endif