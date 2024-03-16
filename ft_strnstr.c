/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 01:00:27 by rlendine          #+#    #+#             */
/*   Updated: 2024/03/15 01:05:03 by rlendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *str, const char *needle, size_t n)
{
	unsigned int	i;
	int				j;

	if (!str || (*needle == '\0' || needle == NULL))
		return ((char *)str);
	i = 0;
	while (str[i] && i < n)
	{
		j = 0;
		while (needle[j] == str[j + i] && i + j < n)
		{
			if (needle[j + 1] == '\0')
				return ((char *)str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
