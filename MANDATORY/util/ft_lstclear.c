/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 04:23:26 by ezahiri           #+#    #+#             */
/*   Updated: 2024/03/04 23:46:40 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstclear(t_list *lst)
{
	t_list	*tmp;

	tmp = NULL;
	if (!lst)
		return (0);
	while (lst)
	{
		tmp = lst->next ;
		free (lst);
		lst = tmp;
	}
	return (0);
}
