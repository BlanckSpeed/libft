/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 01:42:13 by rlendine          #+#    #+#             */
/*   Updated: 2024/02/25 17:47:12 by rlendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (s1[c] && s2[c] && c < n)
	{
		if (s1[c] != s2[c])
			return (s1[c] - s2[c]);
		c++;
	}
	if (c != n)
		return (s1[c] - s2[c]);
	return (0);
}
/*
int	main(void)
{
	char	s1[5] = "pato";
	char	s2[5] = "gato";

	printf ("%d\n", ft_strncmp(s1, s2, 7));
}*/
