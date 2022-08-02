/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scharuka <scharuka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 03:14:57 by scharuka          #+#    #+#             */
/*   Updated: 2022/08/03 03:59:51 by scharuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ans;
	size_t	i;

	i = 0;
	if (!s || !s[0] || ft_strlen(s) <= start)
		return (NULL);
	ans = malloc(sizeof(char) * (len + 1));
	if (!ans)
		return(NULL);
	ft_strlcpy(ans, (s + start), len);
	return(ans);
}
