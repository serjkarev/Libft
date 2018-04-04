/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 18:44:37 by skarev            #+#    #+#             */
/*   Updated: 2018/03/28 18:44:38 by skarev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	long long int	i;
	int				znak;
	long long int	n;

	i = 0;
	n = 0;
	znak = 1;
	while ((str[i] == ' ' || (str[i] > 8 && str[i] < 14)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			znak = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && n >= 0)
	{
		n = n * 10 + ((long long int)(str[i]) - '0');
		i++;
	}
	if (n < 0)
	{
		if (znak < 0)
			return (0);
		return (-1);
	}
	return ((int)n * (int)znak);
}
