/*
** EPITECH PROJECT, 2017
** my_putstrlen
** File description:
** count and return the number of characters
*/

#include "../include/my.h"

int	my_strlen(char *str)
{
	int	cn = 0;

	while (str[cn] != '\0') {
		cn += 1;
	}
	return (cn);
}
