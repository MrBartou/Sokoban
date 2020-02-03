/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** win
*/

#include "my.h"

int	check_win(char **tab, t_map *map)
{
    int k;

    k = 0;
    while (k < map->end_spot) {
        map->count2 = map->spot[k];
        map->count1 = map->spot[k + 1];
        if (tab[map->count2][map->count1] != 'X')
            return (1);
        k = k + 2;
    }
    map->count1 = -111;
    return (0);
}
