/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaldeta <user@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 19:21:46 by mvaldeta          #+#    #+#             */
/*   Updated: 2021/02/12 19:32:26 by mvaldeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen_bonus(int n)
{
	size_t len;

	len = 0;
	while (n != 0 || n < 0)
	{
		len++;
	}
	return (len);
}
