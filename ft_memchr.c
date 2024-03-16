/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 01:18:45 by rlendine          #+#    #+#             */
/*   Updated: 2024/03/15 01:29:01 by rlendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ss;

	ss = (unsigned char *)s;
	if (n)
	{
		while (n--)
			if (*ss++ == (unsigned char)c)
				return (ss - 1);
	}
	return (0);
}
