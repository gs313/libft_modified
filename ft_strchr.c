/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scharuka <scharuka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 23:34:28 by scharuka          #+#    #+#             */
/*   Updated: 2022/08/02 23:43:51 by scharuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (!*s)
	{
		if (*s == (unsigned char) c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (0);
}
