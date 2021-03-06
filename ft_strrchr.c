/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 15:53:39 by mrete             #+#    #+#             */
/*   Updated: 2015/10/24 16:09:40 by mrete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s) - 1;

	while ( i >= 0)
	{
		if ((char)c == s[i])
			return ((char*)(s+i));
		i--;
	}
	return NULL;
}
