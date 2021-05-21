/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaldeta <user@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 18:48:41 by mvaldeta          #+#    #+#             */
/*   Updated: 2021/05/19 16:57:46 by mvaldeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
	int freq[256] = {0};
	int y = 0;
	if (ac == 3)
	{
		int i = 0;
		while(i < 2)
		{
			int k = 0;
			while (av[i][k])
			{
				if (av[1][y] == av[2][k])
				{
					unsigned char c = (unsigned char)av[1][y];
					if (!freq[c])
					{
						freq[c] = 1;
						write(1, &c, 1);
					}
				}
				k++;
			}
			y++;
		}
	}
	return(0);
}