/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:02:46 by oezzaou           #+#    #+#             */
/*   Updated: 2022/07/16 16:02:51 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//====<[ ft_memccpy: ]>=========================================================
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	s = (unsigned char *) src;
	i = -1;
	while (++i < n && s[i] != (unsigned char) c)
		*((unsigned char *)dst + i) = s[i];
	if (i != n)
	{
		*((unsigned char *)dst + i) = s[i];
		return (dst + i + 1);
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	dest[30] = "aaaaaaaa";
	char	src[20] = "hello world";

	printf("%s\n", ft_memccpy(dest, src, 'x', 11));
	return (0);
}
*/
// I have to cpy at indext of first occurence (it was my problem int that code)
