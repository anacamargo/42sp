#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	size_t			size;

	i = 0;
	size = ft_strlen(little);
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && (i + size) <= len)
	{
		if (ft_strncmp(big + i, little, size) == 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
