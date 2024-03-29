/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 04:52:23 by rlendine          #+#    #+#             */
/*   Updated: 2024/03/15 05:27:08 by rlendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	wordcount(char *s, char c)
{
	int	wc;

	if (!*s)
		return (0);
	wc = 0;
	while (*s)
	{
		if ((*s != c) && (*(s + 1) == c || *(s + 1) == '\0'))
			wc++;
		s++;
	}
	return (wc);
}

static int	*wordlength(char *s, char c, int wc)
{
	int	*wl;
	int	i;

	wl = (int *)malloc(sizeof(int) * wc);
	if (wl == 0 || !s)
		return (0);
	i = 0;
	while (*s && wc--)
	{
		wl[i] = 0;
		while (*s == c)
			s++;
		while (*s != c && *s)
		{
			s++;
			wl[i]++;
		}
		i++;
	}
	return (wl);
}

static void	*garbage(char **split, int i)
{
	while (i >= 0)
		free(split[i--]);
	return (0);
}

static char	**spliit(char *ss, char c, char **split, int wc)
{
	int	i;
	int	j;
	int	*wl;

	i = 0;
	wl = wordlength(ss, c, wc);
	if (wl == 0)
		return (0);
	while (i < wc)
	{
		j = 0;
		while (*ss == c)
			ss++;
		if (*ss != c && *ss)
		{
			split[i] = (char *)malloc(wl[i] + 1);
			if (split[i] == 0)
				return (garbage(split, i));
			while (*ss != c && *ss)
				split[i][j++] = *ss++;
			split[i][j] = '\0';
		}
		i++;
	}
	split[i] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	*ss;
	int		wc;

	ss = (char *)s;
	if (!ss)
		return (0);
	wc = wordcount(ss, c);
	split = (char **)malloc(sizeof(char *) * (wc + 1));
	if (split == 0)
		return (0);
	return (spliit(ss, c, split, wc));
}
