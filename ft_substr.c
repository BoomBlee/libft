/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcaraway <kcaraway@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 05:23:47 by boomblee          #+#    #+#             */
/*   Updated: 2021/01/02 10:40:21 by kcaraway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	l;

	i = 0;
	if (!s)
		return (NULL);
	l = ft_strlen(s);
	if (l < (size_t)start)
		return (ft_strdup(""));
	l -= start;
	if (l < len)
		if (!(str = ft_calloc(l + 1, sizeof(char))))
			return (NULL);
	if (l >= len)
		if (!(str = ft_calloc(len + 1, sizeof(char))))
			return (NULL);
	while (i < len && i < l)
		str[i++] = s[start++];
	return (str);
}
