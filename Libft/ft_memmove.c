#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = dest;
	s = src;
	i = dest < src ? 0 : n - 1;
	if (!dest && !src)
		return (NULL);
	if (dest < src)
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	else
		while (i != (size_t)-1)
		{
			d[i] = s[i];
			i--;
		}
	return (dest);
}
