/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcaraway <kcaraway@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 04:11:34 by boomblee          #+#    #+#             */
/*   Updated: 2021/01/02 10:40:21 by kcaraway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t k;
	size_t l;

	k = 0;
	l = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[k] && l < len)
	{
		if (big[k] == little[0])
		{
			i = 1;
			while (little[i] && big[k + i] == little[i] && l++ < len)
				i++;
			if (!little[i])
				return ((char *)&big[k]);
		}
		k++;
		l++;
	}
	return (NULL);
}
