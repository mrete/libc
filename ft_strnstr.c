/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 17:05:12 by mrete             #+#    #+#             */
/*   Updated: 2015/10/24 17:58:02 by mrete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;
	size_t l;

	l = ft_strlen(s2);
	i = 0;
	if ( l > n)
		return NULL;
	if (*s1 == *s2)
		return ((char *)(s1));
	while (s1[i] != '\0' && i < n)
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j] != '\0')
			j++;
		if (s2[j] == '\0')
			return ((char *)(s1 + i));
		else
			i++;
	}
	return NULL;
}
