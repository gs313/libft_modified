/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scharuka <scharuka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 03:14:57 by scharuka          #+#    #+#             */
/*   Updated: 2022/08/03 04:13:28 by scharuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ans;
	size_t	i;
	size_t	reallen;

	i = 0;
	reallen = len;
	if (start >= ft_strlen(s))
		reallen = 0;
	else if (ft_strlen(s) - start < len)
		reallen = ft_strlen(s) - start;
	ans = malloc(sizeof(char) * (reallen + 1));
	if (!ans)
		return(NULL);
	ans = ft_memcpy(ans, (s + start), reallen);
	ans[len - 1] = '\0';
	return(ans);
}
