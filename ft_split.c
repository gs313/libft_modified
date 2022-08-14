/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scharuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:34:23 by scharuka          #+#    #+#             */
/*   Updated: 2022/08/13 17:33:49 by scharuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	word_length(char const *s, char c)
{
	size_t	l;

	l = 0;
	while (*s && *s != c)
	{
			l++;
	}
	return (l);
}

size_t	word_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	*wordcpy(char const *s, char c)
{
	size_t	wl;
	char	*temp;

	wl = word_length(s, c);
	temp = malloc(wl * sizeof(char));
	ft_memcpy(temp, s, wl);
	temp[wl] = '\0';
	return (temp);
}

char	**ft_split(char const *s, char c)
{
	char	**ans;
	size_t	wc;
	size_t	ac;

	wc = word_count(s, c);
	ans = malloc (sizeof(char *) * wc);
	ac = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
		{
			ans[ac] = wordcpy(s, c);
		}
		while (*s != c && *s)
			s++;
	}
	return (ans);
}
