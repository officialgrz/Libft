/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrazina <egrazina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 15:40:02 by egrazina          #+#    #+#             */
/*   Updated: 2022/04/12 13:24:55 by egrazina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*cdest;
	const unsigned char	*csrc;
	size_t				i;

	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	if (!cdest && !csrc)
		return (0);
	if (src > dest)
		ft_memcpy(dest, src, n);
	else
	{
		i = 1;
		while (i <= n)
		{
			cdest[n - i] = csrc[n - i];
			i++;
		}
	}
	return ((void *) cdest);
}
