/*
** EPITECH PROJECT, 2017
** my_putchar
** File description:
** print_char
*/

#include "../include/my.h"

void	my_putchar(char c)
{
	write (1, &c, 1);
}
