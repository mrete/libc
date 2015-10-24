/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 11:55:53 by mrete             #+#    #+#             */
/*   Updated: 2015/10/24 14:25:17 by mrete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ldst;
	size_t	lsrc;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	i = 0;
	if (src[i] == '\0')
		return (ldst);
	if (dst[i] == '\0')
		return (lsrc);
	while (i < size)
	{
		dst[ldst] = src[i];
		ldst++;
		i++;
	}
	dst[ldst] = '\0';
	return (ft_strlen(dst));
}
