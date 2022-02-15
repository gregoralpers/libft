/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galpers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:52:47 by galpers           #+#    #+#             */
/*   Updated: 2022/02/14 23:52:53 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*temp;
	const char	*s;

	if (dst == 0)
		return (NULL);
	temp = dst;
	s = src;
	while (n--)
		*temp++ = *s++;
	return (dst);
}