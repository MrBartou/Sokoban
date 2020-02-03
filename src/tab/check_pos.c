/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** check_pos
*/

#include "my.h"

int	check_spot(t_map *map, int y, int x)
{
    int i;

    i = 0;
    for (;i < map->end_spot;i = i + 2) {
        if (y == map->spot[i] && x == map->spot[i + 1])
            return (1);
    }
    return (0);
}