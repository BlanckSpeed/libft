/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:08:27 by rlendine          #+#    #+#             */
/*   Updated: 2024/03/15 01:34:58 by rlendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stddef.h"
#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*p;

	p = str;
	while (n--)
		*p++ = (unsigned char)c;
	return (str);
}
/*
int	main(void)
{
	char c;
	char str[5] = "Pato";

	c = 'X';
	printf("%s\n", (char *)ft_memset(str, c, sizeof(str) - 3));
	return (0);
}*/
