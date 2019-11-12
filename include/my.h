/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** my.h
*/

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int	my_strlen(char *str);
void	my_putchar(char c);
void	my_putstr(char *str);
void	my_putnbr(int nbr);
void	my_putstr_np(char *str);
int	my_putuint(int nbr);
void	my_putuns(unsigned int nbr);
void	my_putnbr_base(unsigned int nbr, char *base);
void	my_puthexa(unsigned int nbr);
void	my_puthexa_caps(unsigned int nbr);
void	my_putoctal(unsigned int nbr);
void	my_putbin(unsigned int nbr);
void	my_argchar(va_list ap);
void	my_argstr(va_list ap);
void    my_argstr_np(va_list ap);
void    my_argnbr(va_list ap);
void    my_arghexa(va_list ap);
void    my_arghexa_caps(va_list ap);
void    my_argoctal(va_list ap);
void    my_argbin(va_list ap);
void    my_arguns(va_list ap);
void    my_arguint(va_list ap);
void    my_printf(char *str, ...);
void    map_cmp(int cn, char *str, va_list ap);
void    *init_fptr(void);
