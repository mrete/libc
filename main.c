/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 10:48:26 by mrete             #+#    #+#             */
/*   Updated: 2015/10/24 17:54:17 by mrete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include "libft.h"

int	main()
{
	char c[20] = "maria";
	char d[20] = "ma";
	char p[20] = "maria";
	char q[20] = "ma";

	printf("%s",strnstr(c,d,1));
	printf("%c", '\n');
	printf("%s",ft_strnstr(p,q,1));
	return (0);
}
