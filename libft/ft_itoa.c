/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:19:33 by oezzaou           #+#    #+#             */
/*   Updated: 2022/10/02 21:52:35 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_nb_size(long int nb)
{
	if (nb)
		return (1 + ft_nb_size(nb / 10));
	return (0);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long int	nb;

	nb = (long int) n;
	len = ft_nb_size(nb) + 1;
	if (nb <= 0)
	{
		nb *= -1;
		++len;
	}
	str = (char *) malloc (len);
	if (!str)
		return (0);
	str[len - 1] = 0;
	str[0] = '-';
	if (nb == 0)
		str[0] = '0';
	len = len - 2;
	while (nb > 0)
	{
		str[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
/*
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	char	*str;

	str = ft_itoa(atoi(av[1]));
	printf("counter : %d\n", ft_counter(atoi(av[1])));
	puts(str);
	free(str);
	return (0);
}
*/
