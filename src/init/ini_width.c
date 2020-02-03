/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** ini_width
*/

#include "my.h"

void init_width(t_map *map)
{
    int res;

    res = 0;
    map->count1 = 0;
    map->width = 0;
    for (;map->buffer[map->count1] != '\0'; map->count1 = map->count1 + 1) {
        if (map->buffer[map->count1] == '\n') {
            if (res > map->width)
                map->width = res - 1;
            res = 0;
        }
        res = res + 1;
    }
}