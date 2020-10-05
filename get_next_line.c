/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhouari <yhouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 15:47:52 by yhouari           #+#    #+#             */
/*   Updated: 2020/10/04 07:53:12 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

char			*ft_next_line(char *str)
{
	char		*new;
	int			i;
	int			j;

	i = 0;
	j = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (0);
	}
	if (!(new = malloc(sizeof(char) * (ft_strlen(str) - i) + 1)))
		return (0);
	i++;
	while (str[i])
		new[j++] = str[i++];
	new[j] = '\0';
	free(str);
	return (new);
}

char			*ft_line(char *str)
{
	int			i;
	char		*dest;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != '\n')
		i++;
	if (!(dest = malloc(sizeof(char) * i + 1)))
		return (0);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int				get_next_line(int fd, char **line)
{
	static char	*stock;
	char		*buff;
	int			ret;

	if (fd < 0 || !line || BUFFER_SIZE <= 0)
		return (-1);
	if (!(buff = malloc(sizeof(char) * BUFFER_SIZE + 1)))
		return (-1);
	ret = 1;
	while (ft_endline(stock) == 1 && ret != 0)
	{
		if ((ret = read(fd, buff, BUFFER_SIZE)) == -1)
		{
			free(buff);
			return (-1);
		}
		buff[ret] = '\0';
		stock = ft_strjoin(stock, buff);
	}
	free(buff);
	*line = ft_line(stock);
	stock = ft_next_line(stock);
	if (ret == 0)
		return (0);
	return (1);
}
