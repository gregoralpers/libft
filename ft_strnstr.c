/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galpers <galpers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 00:08:43 by galpers           #+#    #+#             */
/*   Updated: 2022/02/21 15:24:52 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;

	i = ft_strlen(needle);
	if (i == 0)
		return ((char *)haystack);
	while (len >= i && ft_strlen(haystack) != 0)
	{
		len--;
		if (!ft_memcmp(haystack, needle, i))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
