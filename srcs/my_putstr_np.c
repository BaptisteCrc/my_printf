/*
** EPITECH PROJECT, 2017
** my_putstr_np
** File description:
** print_string_and_character_non_printable_in_octal
*/

#include"../include/my.h"

void	my_putstr_np(char *str)
{
	int	cn = 0;
	int	bool = 0;

	while (str[cn] != '\0') {
		if (str[cn] <= 32 && str[cn] > 177)
			bool = 1;
		cn += 1;
	}
	cn = 0;
	if (bool = 0)
		my_putstr(str);
	else {
		my_putchar('\\');
		while (str[cn] != '\0') {
			my_putnbr_base(str[cn], "0123456789abcdef");
			cn += 1;
		}
	}
}
