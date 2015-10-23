/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 14:20:27 by mrete             #+#    #+#             */
/*   Updated: 2015/10/23 16:37:22 by mrete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdlib.h>
#include "libft.h"

char *strdup(const char *s1)
{
	char *s;
	int  i;
	int  sum;

	if (s1 == NULL)
		return NULL;
	sum = ft_strlen(s1);
	s = (char*)malloc(sizeof(*s)*(sum + 1));
	i = 0;
	while (i < sum)
	{
		s[i] = s1[i];
		i++;
	}
	return s;
}
