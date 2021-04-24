#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		len;

	len = ft_strlen(s) + 1;
	str = (char *)malloc(len * sizeof(char));
	ft_strlcpy(str, s, len);
	return (str);
}
