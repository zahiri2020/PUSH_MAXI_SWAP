/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:17:36 by ezahiri           #+#    #+#             */
/*   Updated: 2024/03/05 00:05:32 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

char	*ft_strdup(char *s1)
{
	char	*s2;
	int		len;
	int		i;

	len = ft_strlen(s1);
	s2 = (char *)malloc (sizeof(char) * (len + 1));
	if (!s2)
		return (NULL);
	i = 0;
	while (i < len)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
