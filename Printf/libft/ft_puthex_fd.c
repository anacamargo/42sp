#include "libft.h"

void	ft_puthex_fd(int n, int fd, int base, int cap)
{
	char c;

	c = (cap) ? 'A' : 'a';
	if (n > base - 1)
	{
		ft_puthex_fd((n / base), fd, base, cap);
		ft_puthex_fd((n % base), fd, base, cap);
	}
	else
	{
		if (n > 9)
			ft_putchar_fd((n - 10 + c), fd);
		else
			ft_putchar_fd((n + '0'), fd);
	}
}
