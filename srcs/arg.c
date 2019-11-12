/*
** EPITECH PROJECT, 2017
** arg
** File description:
** arg
*/

#include "../include/my.h"

void	my_argchar(va_list ap)
{
	my_putchar(va_arg(ap, int));
}

void	my_argstr(va_list ap)
{
	my_putstr(va_arg(ap, char *));
}

void	my_argstr_np(va_list ap)
{
	my_putstr_np(va_arg(ap, char *));
}

void	my_argnbr(va_list ap)
{
	my_putnbr(va_arg(ap, int));
}

void	my_arghexa(va_list ap)
{
	my_puthexa(va_arg(ap, int));
}
