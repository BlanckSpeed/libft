/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 00:40:09 by rlendine          #+#    #+#             */
/*   Updated: 2024/03/15 00:40:14 by rlendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*s;
	int		i;

	i = (int)size;
	s = (char *)src;
	while (--i > 0 && *s)
		*dst++ = *s++;
	if (size > 0)
		*dst = '\0';
	return (ft_strlen(src));
}
