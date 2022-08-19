/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scharuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:43:50 by scharuka          #+#    #+#             */
/*   Updated: 2022/08/19 22:54:18 by scharuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	l;
	size_t	i;
	char	*ans;

	i = 0;
	l = ft_strlen(s);
	ans = malloc (sizeof(char) * (l + 1));
	while (i < l)
	{
		ans[i] = f(i, s[i]);
		i++;
	}
	ans[l] = '\0';
	return (ans);
}
