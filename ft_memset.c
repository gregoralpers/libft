#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*newb;

	newb = (char *)b;
	while (len > 0)
	{
		newb[len - 1] = c;
		len--;
	}
	return (b);
}
