/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:05:18 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/26 18:50:29 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

static char	*del_line(char *all)
{
	char	*del;
	int		len;
	int		i;

	len = 0;
	while (all[len] != '\n' && all[len] != '\0')
		len++;
	if (all[len] == '\n')
		len++;
	if (all[len] == '\0')
	{
		free(all);
		return (NULL);
	}
	del = (char *)malloc(sizeof(char) * (ft_strlen(all) - len) + 1);
	if (!del)
		return (NULL);
	i = 0;
	while (all[len] != '\0')
		del[i++] = all[len++];
	del[i] = '\0';
	free(all);
	return (del);
}

static char	*red_line(char *all)
{
	char	*line;
	int		len;
	int		i;

	len = 0;
	while (all[len] != '\0' && all[len] != '\n')
		len++;
	if (all[len] == '\n')
		len++;
	line = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	while (i < len)
	{
		line[i] = all[i];
		i++;
	}
	line[len] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	static char		*all;
	char			*buffer;
	char			*line;
	int				red;

	if (fd < 0 || fd > OPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = (char *)malloc ((size_t)BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	red = 1;
	while (red != 0 && !ft_strchr(all, '\n'))
	{
		red = read (fd, buffer, BUFFER_SIZE);
		if (red == -1)
			return (free(buffer), free(all), buffer = NULL, all = NULL, NULL);
		buffer[red] = '\0';
		all = ft_strjoin(all, buffer);
		if (!all[0])
			return (free(buffer), free(all), buffer = NULL, all = NULL, NULL);
	}
	free(buffer);
	line = red_line(all);
	all = del_line(all);
	return (line);
}
