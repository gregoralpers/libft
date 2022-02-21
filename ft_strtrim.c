/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galpers <galpers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:39:20 by galpers           #+#    #+#             */
/*   Updated: 2022/02/21 15:28:07 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;

	if (ft_strlen(s1) <= 0)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) != NULL)
	{
		if (i++ > j)
			return (NULL);
	}
	while (ft_strchr(set, s1[j]) != NULL)
	{
		if (j-- <= i)
			return (NULL);
	}
	return (ft_substr(s1, i, j + 1 - i));
}
