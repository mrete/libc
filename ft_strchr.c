/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 14:29:56 by mrete             #+#    #+#             */
/*   Updated: 2015/10/24 15:48:14 by mrete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	length;
	int i;
	
	i = 0;
	length = ft_strlen(s);
	while (i < length)
	{
		if ((char)c == s[i])
			return ((char*)(s+i));
		i++;
	}
	return NULL;
}
