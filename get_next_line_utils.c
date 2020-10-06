/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhouari <yhouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 15:50:08 by yhouari           #+#    #+#             */
/*   Updated: 2020/10/06 13:55:10 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int			ft_endline(char *str)
{
	int		i;

	i = 0;
	if (str == NULL)
		return (1);
	while (str[i])
	{
		if (str[i] == '\n')
			return (0);
		i++;
	}
	return (1);
}

char		*ft_strjoin(char *s1, char *s2)
{
	char	*dest;
	int		i;
	int		j;

	if (!s1 && !s2)
		return (0);
	if (!(dest = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (0);
	i = 0;
	if (s1 != NULL)
	{
		while (s1[i])
		{
			dest[i] = s1[i];
			i++;
		}
	}
	j = 0;
	while (s2[j])
		dest[i++] = s2[j++];
	dest[i] = '\0';
	free(s1);
	return (dest);
}
