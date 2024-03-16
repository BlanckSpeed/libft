/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 00:34:59 by rlendine          #+#    #+#             */
/*   Updated: 2024/03/15 00:38:01 by rlendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*c;

	s = src;
	c = dest;
	if (!c && !s)
		return (0);
	if (c != s)
	{
		if (c > s && c < s + n)
		{
			s += n - 1;
			c += n - 1;
			while (n--)
				*c-- = *s--;
		}
		else
			while (n--)
				*c++ = *s++;
	}
	return (dest);
}
