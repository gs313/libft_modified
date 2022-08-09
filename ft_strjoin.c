/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scharuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:44:43 by scharuka          #+#    #+#             */
/*   Updated: 2022/08/09 17:30:06 by scharuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	char	*ans;

	i = ft_strlen(s1) + ft_strlen(s2);
	ans = (char)malloc(sizeof(char) * (i + 1));
	ft_strcpy(ans, s1, ft)strlen(s1));
}
