
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)

{
	while ((int)n-- != 0)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((unsigned char *)s);
		s++;
	}
	return (0);
}
