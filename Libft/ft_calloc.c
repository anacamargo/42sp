#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*s;

	s = (void *)malloc(nelem * elsize);
	if (!s)
		return (NULL);
	ft_bzero(s, (nelem * elsize));
	return (s);
}
