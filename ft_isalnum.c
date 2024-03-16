/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:47:01 by rlendine          #+#    #+#             */
/*   Updated: 2024/03/15 01:27:03 by rlendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isdigit(char a)
{
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}

int	ft_isalpha(char a)
{
	if (!(a >= 'A' && a <= 'Z' ) && !(a >= 'a' && a <= 'z'))
		return (0);
	return (1);
}

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	return (0);
}
/*
int	main()
{
	char	c;

	c = 'R';
	printf("%d\n", ft_isalnum(c));
}*/
