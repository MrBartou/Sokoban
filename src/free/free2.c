/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** free2
*/

#include "my.h"

int	is_free(char **tab, int y, int x)
{
    if (tab[y][x] == ' ')
        return (1);
    if (tab[y][x] == 'O')
        return (2);
    if (tab[y][x] == 'X')
        return (-1);
    if (tab[y][x] == 'x')
        return (-2);
    return (0);
}