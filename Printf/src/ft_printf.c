/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 04:31:46 by aclaudia          #+#    #+#             */
/*   Updated: 2021/03/27 00:11:33 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/ft_printf.h"

int		ft_printf(const char *format, ...)
{
	t_flags	value;

	ft_init_flags(&value);
	va_start(value.args, format);
	// 1) 10
	// 2) 'f'
	// 3) "Oi"

	while (format && format[value.index])
	{
		if (format[value.index] == '%')
		{
			value.index++;
			"TESTE %-042(*).54(*)[d,i,u,x,X,c,s,p,%]"
			"TESTE %d %c %s", 10, 'f', "Oi"
			while (is_printf_flags(format[value.index]))
			{
				"-042.63s" 
				char *p = -042(*).54(*)
				char c = [d,i,u,x,X,c,s,p,%]
				- / . / * / DIGIT 
				[d,i,u,x,X,c,s,p,%]
			}
			flags(ft_substr(format, (value.index - (aux)),    &value);
			ft_select_conversion(format[value.index - 1], &value);
			// ft_select_conversion(format, &value);
		}
		else
			ft_putchar_fd(format[value.index], 1);
		value.index++;
	}
	va_end(value.args);
	return (0);
}

// int *ft_check_flags(char *format, t_flags *value)
// {
// 	if (format[value->index] == "-")
// 		value->minus = 1;
// 	else if (format[value->index] == "0")
// 		value->zero = 1;
// 	else if (format[value->index] == "*")
// 		value->star = 1;
// 	else if (format[value->index] == ".")
// 		value->dot  = 1;
// 	return (0);
// }

// void  ft_select_conversion(char *format, t_flags *value)
// {
	// ft_check_flags(format, value);
	// if (format[value->index] == "c")
	// 	ft_convert_to_c(format, value);
	// if (format[value->index] == "s")
	// 	ft_convert_to_s(format, value);
	// if (format[value->index] == "p")
	// 	ft_convert_to_p(format, value);
	// if (format[value->index] == "d" || format[value->index] == "i" || format[value->index] == "u")
	// 	ft_convert_to_nb(format, value);
	// if (format[value->index] == "x" || format[value->index] == "X")
	// 	ft_convert_to_x(format, value);
// }

int main()
{
	char c = 'a';
	ft_printf("TESTE\n%c\n%d\n%s\n%u\n%x\n%X\n0x%p\n", 'a', 1000, "oi", -4, 1034, 25963, &c);
	printf("%p\n", &c);
	printf("%u\n", -4573);
	// ft_putnbr_fd(1000, 1);
	return(0);
}