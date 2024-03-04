/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_ins.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:21:49 by ezahiri           #+#    #+#             */
/*   Updated: 2024/03/04 10:14:38 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	clear_ins(t_ins **lst)
{
	t_ins	*tmp;

	if (!*lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next ;
		free((*lst)->content);
		free(*lst);
		(*lst) = tmp;
	}
	*lst = NULL;
}
