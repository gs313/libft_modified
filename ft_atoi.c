/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scharuka <scharuka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 02:16:53 by scharuka          #+#    #+#             */
/*   Updated: 2022/08/03 02:36:56 by scharuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
int	ft_isspace(const char c)
{
	if (c == '\r' || c == '\n' || c == '\f'
		|| c == '\v' || c == '\t' || c == ' ' )
		return (1);
	return (0);
}
int	ft_atoi(const char *str)
{
	int	i;
	int	minus;
	int	ans;

	i = 0;
	ans = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		minus = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while(str[i])
	{
		ans = ans * 10 + (str[i] - '0');
		i++;
	}
	return (ans);
}
