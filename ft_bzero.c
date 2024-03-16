/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 23:10:00 by rlendine          #+#    #+#             */
/*   Updated: 2024/03/14 13:37:41 by rlendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = s;
	while (n-- > 0)
		*ptr++ = 0;
}
/*
int	main(void)
{
	char s[5] = "Pato";
	size_t i;

	i = 0;
	ft_bzero(s, sizeof(s));
	while (i >= 0 && i < sizeof(s))
	{
		printf("%d", (unsigned char)s[i]);
		i++;
	}
	return (0);
}*/
