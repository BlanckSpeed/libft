/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 04:29:09 by rlendine          #+#    #+#             */
/*   Updated: 2024/03/15 04:52:08 by rlendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static char	*ft_cstrim(char *s2, char *s3)
{
	int		size;
	char	*trim;
	int		i;

	size = (unsigned long)s3 - (unsigned long)s2 + 1;
	trim = (char *)malloc(size + 1);
	if (trim == NULL)
		return (NULL);
	i = 0;
	while (s2 < s3)
		trim[i++] = *s2++;
	trim[i] = *s2;
	trim[i + 1] = '\0';
	return (trim);
}

static char	*f(void)
{
	char	*s;

	s = malloc(1);
	if (s == NULL)
		return (NULL);
	*s = '\0';
	return (s);
}

static void	ft_trimstart(const char **s2, const char *set)
{
	int	i;
	int	found;

	while (**s2)
	{
		i = 0;
		found = 0;
		while (set[i])
		{
			if (**s2 == set[i])
			{
				(*s2)++;
				found = 1;
				break ;
			}
			i++;
		}
		if (!found)
			break ;
	}
}

static void	ft_trimend(const char **s3, const char *s1, const char *set)
{
	int	i;
	int	found;

	while (*s3 > s1)
	{
		i = 0;
		found = 0;
		while (set[i])
		{
			if (**s3 == set[i])
			{
				(*s3)--;
				found = 1;
				break ;
			}
			i++;
		}
		if (!found)
			break ;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*s2;
	const char	*s3;

	if (!s1 || !set)
		return (NULL);
	s2 = s1;
	s3 = s1 + ft_strlen(s1) - 1;
	ft_trimstart(&s2, set);
	ft_trimend(&s3, s1, set);
	if (*s2 == '\0')
		return (f());
	else
		return (ft_cstrim((char *)s2, (char *)s3));
}
