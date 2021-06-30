#include "../includes/ft_printf.h"
// 3#include <stdio.h>

static t_flags	flags_init(void)
{
	t_flags	flag;

	flag.dash = 0;
	flag.zero = 0;
	flag.width = 0;
	flag.star = 0;
	flag.accuracy = -1;
	flag.space = 0;
	return (flag);
}

int	ft_printf(const char *src, ...)
{
	va_list	ap;
	int		i;
	int		len_str;
	t_flags	flag;

	va_start(ap, src);
	i = -1;
	len_str = 0;
	while (src[++i])
	{
		flag = flags_init();
		if (src[i] != '%')
			len_str += ft_putnchar(src[i], 1);
		else if (ft_strchar("cspdiuxX%%", src[i]))
		{
			i = flag_parser(src, ++i, &flag, ap);
			len_str += type_printer(src, i, flag, ap);
		}
	}
	va_end(ap);
	return (len_str);
}
