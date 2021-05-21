/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaldeta <user@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 19:12:36 by mvaldeta          #+#    #+#             */
/*   Updated: 2021/05/19 16:27:35 by mvaldeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
# include <fcntl.h>

int    get_next_line(char **line)
{
    int        i;
    int        l;
    int        r;
    char    c;
    char    *tmp;

    r = 0;
    l = 1;
    if (!(*line = malloc(l)))
        return (-1);
    (*line)[0] = 0;
    while ((r = read(0, &c, 1)) && l++ && c != '\n')
    {
        if (!(tmp = malloc(l)))
        {
            free(*line);
            return (-1);
        }
        i = -1;
        while (++i < l - 2)
            tmp[i] = (*line)[i];
        tmp[i] = c;
        tmp[i + 1] = 0;
        free(*line);
        *line = tmp;
    }
    return (r);
}

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
    r = get_next_line(&line);
    printf("%d-%s\n", r, line);
    free(line);
    /* write(1, line, ft_strlen(line)); */
  } while (r > 0);

  /* while (1)
    ; */ 
  //free(line);
  return (0);
}
