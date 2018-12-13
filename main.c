/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 14:14:35 by mmraz             #+#    #+#             */
/*   Updated: 2018/12/13 19:53:45 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int     main(int argc, char **argv)
{
    int     fd;
    char    *line;

    fd = open(argv[1], O_RDONLY);
    if (argc > 1 && fd > 0)
    {
        get_next_line(fd, &line);
        //printf("%s\n", line);
        get_next_line(fd, &line);
    }
    return (0);
}