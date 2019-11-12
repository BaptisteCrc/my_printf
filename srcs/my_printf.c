/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** print_character
*/

#include "../include/my.h"

void	*init_fptr(void)
{
	void (**fptr)(va_list);

	fptr = malloc(sizeof(*fptr) * 11);
	fptr[0] = &my_argchar;
	fptr[1] = &my_argstr;
	fptr[2] = &my_argstr_np;
	fptr[3] = &my_argnbr;
	fptr[4] = &my_argnbr;
	fptr[5] = &my_arghexa;
	fptr[6] = &my_arghexa_caps;
	fptr[7] = &my_argoctal;
	fptr[8] = &my_arguns;
	fptr[9] = &my_argbin;
	fptr[10] = &my_arguint;
	return (fptr);
}

void	map_cmp(int cn, char *str, va_list ap)
{
	int cn1 = 0;
	char *map = "csSidxXoubp";
	void (**fptr)(va_list);

	fptr = init_fptr();
	while (cn1 < 11) {
		if (str[cn] == map[cn1])
			fptr[cn1](ap);
		cn1 += 1;
	}
	free(fptr);
}

void	my_printf(char *str, ...)
{
	va_list	ap;
	int cn = 0;
	void (**fptr)(va_list);

	va_start(ap, str);
	while (str[cn] != '\0') {
		if (str[cn] == '%') {
			cn += 1;
			if (str[cn] == '%')
				my_putchar('%');
			map_cmp(cn, str, ap);
		} else
			my_putchar(str[cn]);
		cn += 1;
	}
	va_end(ap);
}
