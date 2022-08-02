/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scharuka <scharuka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 01:20:53 by scharuka          #+#    #+#             */
/*   Updated: 2022/08/03 01:49:53 by scharuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	nlen;
	
	i = 0;
	j = 0;
	if (needle == NULL)
		return ((char *)haystack);
	nlen = ft_strlen(needle);
	while (i <= len - nlen && haystack[i])
	{
		if (haystack[i] == needle[j])
			j++;
		else
			j = 0;
		if (!needle[j])
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
