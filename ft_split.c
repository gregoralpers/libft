/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galpers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:45:31 by galpers           #+#    #+#             */
/*   Updated: 2022/02/21 11:14:52 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strldup(const char *src, int pos, int size)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(char) *(size + 1));
	if (str == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		str[i] = src[pos + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static int	ft_is_char(const char *src, int pos, char c)
{
	int	i;

	i = 0;
	
	if (src[pos] == c)
		return (0);
	return (1);
}

static int	ft_wrdlen(const char *str, int pos, char c)
{
	int	i;

	i = 0;
	while (str[pos + i] != '\0' && ft_is_char(str, (pos + i), c) == 1)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	int		j;
	int		size;

	i = 0;
	j = 0;
	split = (char **)malloc(sizeof (char) * (ft_strlen(s) + 1));
	if (split == NULL)
		return (0);
	while (i < ft_strlen(s))
	{
		if (ft_is_char(s, i, c) == 1)
		{
			size = ft_wrdlen(s, i, c);
			{
				split[j] = ft_strldup(s, i, size);
				i = i + size;
				j++;
			}
		}
		i++;
	}
	split[j] = 0;
	return (split);
}