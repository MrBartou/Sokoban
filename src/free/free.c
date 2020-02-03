/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** free
*/

#include "my.h"

void free_this(char **tab, t_map *map)
{
    map->count2 = 0;
    for (;map->count2 < map->height; map->count2 = map->count2 + 1) {
        free(tab[map->count2]);
    }
    free(tab);
}