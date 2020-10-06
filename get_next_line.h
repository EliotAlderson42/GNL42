/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhouari <yhouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:21:50 by yhouari           #+#    #+#             */
/*   Updated: 2020/10/06 13:54:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

char	*ft_next_line(char *str);
char	*ft_line(char *str);
char	*ft_strjoin(char *s1, char *s2);

int		ft_strlen(char *str);
int		ft_endline(char *str);
int		get_next_line(int fd, char **line);

#endif
