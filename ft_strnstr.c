/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 16:21:18 by skarev            #+#    #+#             */
/*   Updated: 2018/03/28 16:21:18 by skarev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	const char	*s1;
	size_t		i;

	i = 0;
	if (*str2 == '\0')
		return ((char*)str1);
	while (*str1 != '\0' || i <= len)
	{
		s1 = str1;
		while (*s1 != '\0' && *s1 == *str2 && i < len)
		{
			s1++;
			str2++;
			i++;
		}
		if (*str2 == '\0')
			return ((char*)str1);
		str1++;
		i++;
	}
	return (0);
}
