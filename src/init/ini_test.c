/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** ini_test
*/

#include "my.h"

int ini_test(t_map *map)
{
    for (;map->buffer[map->count1] != '\0'; map->count1 = map->count1 + 1) {
        if (map->buffer[map->count1] == '\n')
            map->height = map->height + 1;
    }
    return (0);
}