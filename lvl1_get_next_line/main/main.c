/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaldeta <user@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 12:15:52 by mvaldeta          #+#    #+#             */
/*   Updated: 2021/02/23 18:17:46 by mvaldeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIB: none
** SYN:
** DESC:
** (｡◕‿◕｡)
*/

#include "get_next_line.h"



int main(int argc, char **argv)
{
  int fd;
  //int fd2;
  int r;
  char *line;

  fd = 0;
  r = 22;
  if (argc > 1)

    /*   fd2 = open(argv[2], O_RDONLY);
  printf("%d\n", fd);
  printf("%d\n", fd2); */

    //fd = open(argv[1], O_RDONLY);
    fd = open(argv[1], O_RDONLY);
  do
  {
    r = get_next_line(fd, &line);
    printf("%d-%s\n", r, line);
    free(line);
    /* write(1, line, ft_strlen(line)); */
  } while (r > 0);

  /* while (1)
    ; */ 
  //free(line);
  return (0);
}
