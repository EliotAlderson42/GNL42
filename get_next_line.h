/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhouari <yhouari@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 04:10:29 by user42            #+#    #+#             */
/*   Updated: 2020/10/05 04:22:02 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>

char	*ft_next_line(char *str);
char	*ft_line(char *str);
char	*ft_strjoin(char const *s1, char const *s2);

int		ft_strlen(char const *str);
int		ft_endline(char *str);
int		get_next_line(int fd, char **line);

#endif
