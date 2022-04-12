/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrazina <egrazina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 06:27:28 by egrazina          #+#    #+#             */
/*   Updated: 2022/04/12 13:20:36 by egrazina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*newstr;

	i = 0;
	newstr = (unsigned char *)str;
	while (i < n)
	{
		newstr[i] = (unsigned char) c;
		i++;
	}
	return (str);
}
