/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 23:15:05 by rlendine          #+#    #+#             */
/*   Updated: 2024/03/12 22:46:08 by rlendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}
/*
int	main(void)
{
	char	str[10] = "123456789";
	int resultado;

	resultado = ft_strlen(str);
	printf("You have %d numbers in your array\n", resultado);
	return(0);
}*/
