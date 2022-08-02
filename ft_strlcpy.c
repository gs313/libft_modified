/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scharuka <scharuka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 22:14:38 by scharuka          #+#    #+#             */
/*   Updated: 2022/08/02 22:32:03 by scharuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t i;

	i = 0;
	while(i < (dstsize - 1) && src[i])
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	dst[++i] = '\0';
	return(ft_strlen(src));
}
