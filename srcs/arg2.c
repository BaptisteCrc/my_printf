/*
** EPITECH PROJECT, 2017
** arg2
** File description:
** arg2
*/

#include "../include/my.h"

void	my_arghexa_caps(va_list ap)
{
	my_puthexa_caps(va_arg(ap, int));
}

void	my_argoctal(va_list ap)
{
	my_putoctal(va_arg(ap, int));
}

void	my_argbin(va_list ap)
{
	my_putbin(va_arg(ap, int));
}

void	my_arguns(va_list ap)
{
	my_putuns(va_arg(ap, int));
}

void	my_arguint(va_list ap)
{
	my_putuint(va_arg(ap, int));
}
