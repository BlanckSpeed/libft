/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 04:33:09 by rlendine          #+#    #+#             */
/*   Updated: 2024/03/15 00:46:04 by rlendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;
	size_t		dl;

	i = n;
	s = src;
	d = dest;
	while (dest && *d && i-- != 0)
		d++;
	dl = d - dest;
	i = n - dl;
	if (i == 0)
		return (dl + ft_strlen(s));
	while (*s)
	{
		if (i != 1)
		{
			*d++ = *s;
			i--;
		}
		s++;
	}
	*d = '\0';
	return (dl + (s - src));
}

/*
int	main(void)
{
	char	dest[5] = "Pato";
	char	src[6] = "Blanco";
	printf("%u\n", ft_strlcat(dest, src, 11));
	printf ("%s\n", dest);
}*/
