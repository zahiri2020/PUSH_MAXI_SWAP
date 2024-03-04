/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 01:46:35 by ezahiri           #+#    #+#             */
/*   Updated: 2024/03/05 00:05:46 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	check(char c, char c1, char c2, int i)
{
	if (ft_isdigit(c))
		return (1);
	else if (c == ' ')
		return (1);
	else if (c == '-' && ft_isdigit(c1) && !ft_isdigit(c2) && i != 0)
		return (1);
	else if (c == '-' && ft_isdigit(c1) && i == 0)
		return (1);
	else if (c == '+' && ft_isdigit(c1) && !ft_isdigit(c2) && i != 0)
		return (1);
	else if (c == '+' && ft_isdigit(c1) && i == 0)
		return (1);
	else
		return (0);
}

char	*parsing(char *str)
{
	static char	*s;
	int			i;

	i = 0;
	while (str[i])
	{
		if (check(str[i], str[i + 1], str[i - 1], i))
		{
			if (str[i] == '-' || str[i] == '+')
				i++;
			while (ft_isdigit(str[i]))
				i++;
			while (str[i] == ' ')
				i++;
		}
		else
			ft_exit(s);
	}
	s = ft_strjoin(s, str);
	s = ft_strjoin(s, " ");
	return (s);
}
