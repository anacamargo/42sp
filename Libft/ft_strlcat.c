#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (size <= ft_strlen(dest))
		return (ft_strlen(src) + size);
	while (dest[i] != '\0')
	{
		size--;
		i++;
	}
	while (src[j] != '\0' && size > 1)
	{
		dest[i + j] = src[j];
		j++;
		size--;
	}
	dest[i + j] = '\0';
	while (src[j] != '\0')
		j++;
	return (i + j);
}
