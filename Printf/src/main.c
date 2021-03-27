# include "../includes/ft_printf.h"

int main()
{
	// ft_printf("TESTE\n%c%d", 'a', 1000);
	// ft_putnbr_fd(1000, 1);
	ft_puthex_fd(31, 1, 10, 0);
	printf("\n");
	ft_puthex_fd(31, 1, 16, 1);
	printf("\n");
	ft_puthex_fd(31, 1, 16, 0);
	printf("\n");
	return(0);
}
