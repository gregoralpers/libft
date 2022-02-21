/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galpers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:04:23 by galpers           #+#    #+#             */
/*   Updated: 2022/02/21 13:43:07 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char            *substr;
    unsigned int    i;

    i = 0;
    if(s == NULL || start > ft_strlen(s))
        return (NULL);
    if(len > (ft_strlen(s) - start))
        len = ft_strlen(s) - start;
    substr = (char *)malloc(sizeof(char) * (len + 1));    
    if(substr == NULL || ft_strlen(s) <= start)
        return (NULL);
    while (i < len)
        {
            substr[i] = s[start + i];
            i++;
        }
    substr[i] = '\0';
    return(substr);
}