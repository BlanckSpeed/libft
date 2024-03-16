/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 01:16:43 by rlendine          #+#    #+#             */
/*   Updated: 2024/03/15 01:42:44 by rlendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s1)
{
	char	*s;
	char	*dp;
	int		i;

	s = (char *)s1;
	dp = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dp == NULL)
		return (0);
	if (!s)
	{
		*dp = '\0';
		return (dp);
	}
	i = 0;
	while (*s)
	{
		dp[i] = *s;
		s++;
		i++;
	}
	dp[i] = '\0';
	return (dp);
}
