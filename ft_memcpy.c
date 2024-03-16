/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 01:19:49 by rlendine          #+#    #+#             */
/*   Updated: 2024/03/15 01:33:29 by rlendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_cpymem(void *dest, const void *src, size_t n)
{
	char	*csrc;
	char	*cdest;
	size_t	i;

	cdest = (char *)dest;
	csrc = (char *)src;
	if (csrc < cdest && cdest < csrc + n)
	{
		while (n != 0)
		{
			cdest[n - 1] = csrc[n - 1];
			n--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[5] = "Pato";
	char	dest[5];
	printf("%s\n", ft_cpymem(dest, src, sizeof(dest)));
}*/
