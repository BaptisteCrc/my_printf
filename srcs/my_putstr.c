/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** print_string
*/

#include "../include/my.h"

void	my_putstr(char *str)
{
	int	cn = 0;

	while (str[cn] != '\0') {
		my_putchar(str[cn]);
		cn += 1;
	}
}
