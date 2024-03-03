/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_duplicate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:02:36 by ezahiri           #+#    #+#             */
/*   Updated: 2024/03/03 21:22:57 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_util.h"

int	is_duplicate(char **strs)
{
	int		i;
	int		j;
	long	a;

	a = 0;
	i = 0;
	while (strs[i])
	{
		a = ft_atoi(strs[i]);
		j = i + 1;
		if (a > 2147483647 || a < -2147483648)
			return (1);
		while (strs[j])
		{
			if (a == ft_atoi(strs[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
