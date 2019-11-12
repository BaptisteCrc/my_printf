/*
** EPITECH PROJECT, 2017
** my_putnbr_base
** File description:
** print_number_in_given_base
*/

#include "../include/my.h"

void	my_putnbr_base(unsigned int nbr, char *base)
{
	int	lenght = my_strlen(base);
	int	mod = nbr % lenght;
	int	beg = nbr / lenght;
	int	res;

	if (nbr < 0)
	{
		my_putchar('-');
		nbr = -nbr;
	} else {
		if (beg != 0) {
			my_putnbr_base(beg, base);
		}
		my_putchar(base[mod]);
	}
}
