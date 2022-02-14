#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;

	if (c == 0)
		return ((char *)s + (int)(ft_strlen(s)));
	res = 0;
	while (*s)
	{
		if (*s == (char)c)
			res = (char *)s;
		s++;
	}
	return (res);
}
