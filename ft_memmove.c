/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 18:58:45 by skarev            #+#    #+#             */
/*   Updated: 2018/03/24 18:58:46 by skarev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	i = 0;
	while (i < len && ((char*)dst)[i] != '\0')
	{
		if (((char*)dst)[i] != ((char*)src)[i])
			((char*)dst)[i] = ((char*)src)[i];
		else
			((char*)dst)[i] = ((char*)src)[i];
		i++;
	}
	return (dst);
}
