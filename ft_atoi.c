/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 01:48:25 by rlendine          #+#    #+#             */
/*   Updated: 2024/03/15 01:22:22 by rlendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	solution;

	i = 0;
	s = 1;
	solution = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		solution = solution * 10 + (str[i++] - '0');
	return (s * solution);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%i\n", ft_atoi(argv[1]));
	return (0);
}*/
