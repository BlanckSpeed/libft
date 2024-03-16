/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:25:49 by rlendine          #+#    #+#             */
/*   Updated: 2024/03/12 22:28:40 by rlendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_isalpha(char a)
{
	if (!(a >= 'A' && a <= 'Z' ) && !(a >= 'a' && a <= 'z'))
		return (0);
	return (1);
}
/*
int	main(void)
{
	char	a;
	a = 'R';
	printf("%d\n", ft_isalpha(a));
}*/
