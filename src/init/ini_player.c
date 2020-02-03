/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** ini_player
*/

#include "my.h"

void init_spot(char **tab, t_map *map)
{
    int k;

    k = 0;
    map->count1 = 0;
    map->count2 = 0;
    for (;map->count2 < map->height; map->count2 = map->count2 + 1) {
        for (;map->count1 < map->width; map->count1 = map->count1 + 1) {
            if (tab[map->count2][map->count1] == 'O') {
                change_map(map, k);
                k = k + 2;
            }
        }
        map->count1 = 0;
    }
    map->end_spot = k;
}

int change_map(t_map *map, int k)
{
    map->spot[k] = map->count2;
    map->spot[k + 1] = map->count1;
    return (0);
}