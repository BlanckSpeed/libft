/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:50:58 by rlendine          #+#    #+#             */
/*   Updated: 2024/03/12 22:27:07 by rlendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isascii(unsigned char c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main()
{
	unsigned char	c;

	c = 127;
	printf("%d\n", ft_isascii(c));
}*/
