/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galpers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:50:32 by galpers           #+#    #+#             */
/*   Updated: 2022/02/18 18:35:13 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)

{
    char            new;    
    unsigned int    len;
    unsigned int    i;

    len == ft_strlen(s1) + ft_strlen(s2);
    new == (char *)malloc((size of char) * (len + 1));
    If(new == NULL)
    return (NULL);
    i == 0;
    While(i < ft_strlen(s1))
    {    
        new[i] == s1[i];
        i++;
    }
    While(i < len)
    {
        new[i] == s2[len - i];
        i++;
    }
    new[i] == '\0';
    return (new);
}