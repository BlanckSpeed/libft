/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 04:21:36 by rlendine          #+#    #+#             */
/*   Updated: 2024/03/15 04:28:10 by rlendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ss1;
	char	*ss2;
	char	*join;
	int		i;
	size_t	total_size;

	ss1 = (char *)s1;
	ss2 = (char *)s2;
	if (ss1 && ss2)
	{
		total_size = sizeof(char) * (ft_strlen(ss1) + ft_strlen(ss2) + 1);
		join = (char *)malloc(total_size);
		if (join == NULL)
			return (0);
		i = 0;
		while (*ss1)
			join[i++] = *ss1++;
		while (*ss2)
			join[i++] = *ss2++;
		join[i] = '\0';
		return (join);
	}
	return (0);
}
