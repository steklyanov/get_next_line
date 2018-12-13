/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 14:14:01 by mmraz             #+#    #+#             */
/*   Updated: 2018/12/13 18:15:12 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char			*send_result(char **str, char **line)
{
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	int			redd;
	static char	*str[4096];
	char		*tmp;

	if (fd < 0 || !line)
		return (-1);
	if (str[fd] == NULL)
		str[fd] = ft_strnew(0);
	while (!ft_strchr(str[fd], '\n') && (redd = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[redd] = '\0';
		tmp = str[fd];
		str[fd] = ft_strjoin(tmp, buf);
		ft_strdel(&tmp);
	}
	if (*str[fd] != '\0')
	{
		str[fd] = send_result(&str[fd], line);
		return (1);
	}
	printf("%s\n", str[fd]);
	return (0);
}
