/*
** EPITECH PROJECT, 2017
** my_putascii
** File description:
** print_ascii
*/

#include "../include/my.h"

void	my_putuns(unsigned int nbr)
{
	if (nbr >= 10)
		my_putnbr(nbr / 10);
	my_putchar(nbr % 10 + '0');
}
