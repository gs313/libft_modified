/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scharuka <scharuka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 22:14:38 by scharuka          #+#    #+#             */
/*   Updated: 2022/08/02 23:09:40 by scharuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t i;
	size_t srclen;

	i = 0;
	srclen = ft_strlen(src);
	if(!dst)
	{
		return (0);
	}
	if (!dstsize)
		return (srclen);
	while(i < (dstsize - 1) && i < srclen)
	{
		dst[i] = src[i];
		i++;
	}
	//i++;
	dst[i] = '\0';
	return(srclen);
}
