/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scharuka <scharuka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 03:14:57 by scharuka          #+#    #+#             */
/*   Updated: 2022/08/03 04:02:00 by scharuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ans;
	size_t	i;

	i = 0;
	ans = malloc(sizeof(char) * (len + 1));
	if (!ans)
		return(NULL);
	ans = ft_memcpy(ans, (s + start), len + 1);
	return(ans);
}
