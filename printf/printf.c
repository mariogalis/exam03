#include "printf.h"

void put_str(char * str, int *len)
{
	if (!str)
		str = "(null)";
	while (*str)
		*len += write(1, str++, 1);
}

void put_num(long long int num,int base, int *len)
{
	char  *h = "0123456789abcdef";

	if(num < 0)
	{
		num = num * -1;
		*len += write(1, "-", 1);
	}
	if (num >= base)
		put_num((num / base), base, len);
	*len += write(1, &h[num % base], 1);
}

int ft_printf(const char *s, ... )
{
	int len = 0;
	va_list arg;
	va_start(arg, s);

	while(*s)
	{
		while(*s != '%' && *s)
		{
			len += write(1, s, 1);
			s++;
		}
		if(!*s)
			return len;
		if(*(s+1) == 's')
			put_str(va_arg(arg, char *), &len);
		else if(*(s+1) == 'd')
			put_num(va_arg(arg, long long int),10,&len);
		else if(*(s+1) == 'x')
			put_num(va_arg(arg,long long int ), 16,&len);
		s = s +2;
	}
	va_end(arg);
	return(len);
}
