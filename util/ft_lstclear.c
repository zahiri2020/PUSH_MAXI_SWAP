/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 04:23:26 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/26 16:24:08 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_util.h"

int	ft_lstclear(t_list **lst)
{
	t_list	*tmp;

	if (!lst)
		return (0);
	while (*lst)
	{
		tmp = (*lst)->next ;
		free (*lst);
		*lst = tmp;
	}
	*lst = NULL;
	return (0);
}
