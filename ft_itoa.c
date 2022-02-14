#include "libft.h"

static int	length(long nbr)
{
	int	i;
	
	i = 0;
	if (nbr == 0)
	{
		return(1);

	}

	if (nbr < 0)
	{
		i = 1;
		nbr =-nbr;
	}
	
	while (nbr > 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int		len;
	char 	*number;
	long	nb;
	int		k;

	k = 0;
	nb = nbr;
	len = length(nb); 
	number = (char *)malloc(sizeof (char *) * len);
	if (number == NULL)
		return (NULL);
	if (nbr == 0)
			number[0] = 48;
	if (nb < 0)
	{
		number [0] = '-';
		nb = -nb;
		k = 1;
	}
	number[len] == '\0';
	while (len > k)
	{
		number[len - 1] = (nb % 10) + 48;
		nb = nb / 10;
		len--;
	}

	return (number);
}
