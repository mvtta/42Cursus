/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaldeta <user@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 18:48:41 by mvaldeta          #+#    #+#             */
/*   Updated: 2021/05/17 19:12:13 by mvaldeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
	int freq[256] = {0};
	if (ac == 3)
	{
		int y = 0;
		while(av[1][y])
		{
			y = 0;
			while (av[2][y])
			{
				if (av[1][y] == av[2][y])
				{
					if (!freq[((unsigned char)av[1][y])])
					{
						freq[((unsigned char)av[1][y])] = 1;
						write(1, &av[1][y], 1);
					}
				}
				y++;
			}
			break;
		}
	}
	return(0);
}