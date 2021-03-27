#include "../includes/ft_printf.h"

static	int	ft_length_num(int num)
{
	int i;

	i = 1;
	if (num == 0)
		return (1);
	while ((num /= 10) >= 1)
		i++;
	return (i);
}

static int size_ud (int num, int base)
{
	int i;

	i = 1;
	if (num == 0)
		return (1);
	while ((num /= base) >= 1)
		i++;
	return (i);
}


int		ft_put(t_flags *value, t_print *print)
{
	return (0);
}


// "%10.5d", 83

// |     00083|

// WIDTH - MAX(PREC, SIZE_PRINT)
// PREC - SIZE_PRINT > 0

// |     ||000||83|

// SIZE_PRINT: 
// c, s

// d (NEG) 

// u, x, X  /(base)  

// p (0x)
// /(base)