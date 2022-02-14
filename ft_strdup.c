#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	int		i;

	str = (char*) malloc(sizeof(*src) *(ft_strlen(src) + 1));
	if (str == NULL)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = src[i];
	return (str);
}
