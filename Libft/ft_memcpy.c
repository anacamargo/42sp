#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	i = 0;
	while ((i < n) && (d != NULL || s != NULL))
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
