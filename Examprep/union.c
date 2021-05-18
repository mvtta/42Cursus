/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaldeta <user@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 17:28:41 by mvaldeta          #+#    #+#             */
/*   Updated: 2021/05/17 18:57:25 by mvaldeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int freq[255] = {0};
	if (argc >= 2)
	{
		int x = 1;
		while (x < 3)
		{
			int y = 0;
			while (argv[x][y])
			{
			/* 		printf("%d\n", i);
					printf("%s\n", &argv[1][i]);
					printf("%s\n", &argv[2][j]); */
					if(!freq[((unsigned char)argv[x][y])])
					{
						freq[((unsigned char)argv[x][y])] = 1;
						write(1, &argv[x][y], 1);		
					}
				y++;
			}
			x++;
		}
	}
	return(0);
}