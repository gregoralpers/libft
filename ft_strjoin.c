/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galpers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:50:32 by galpers           #+#    #+#             */
/*   Updated: 2022/02/21 13:25:28 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)

{
    char            *new;    
    unsigned int    len;
    unsigned int    i;

    if (s1 == NULL || s1 == NULL)
		return (NULL);
    len = ft_strlen(s1) + ft_strlen(s2);
    new = (char *)malloc((sizeof (char)) * (len + 1));
    if(new == NULL)
    return (NULL);
    i = 0;
    while(i < ft_strlen(s1))
    {    
        new[i] = s1[i];
        i++;
    }
    while(i < len)
    {
        new[i] = s2[len - i];
        i++;
    }
    new[i] = '\0';
    return (new);
}