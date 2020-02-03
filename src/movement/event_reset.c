/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** event_reset
*/

#include "my.h"

char **event_reset(int ch, char **tab, t_map *map)
{
    map->count1 = map->count1;
    if (ch == 32) {
        free_this(tab, map);
        map->count1 = 0;
        map->count2 = 0;
        tab = create_tab(map, tab, 0);
        map->nb_moves = 0;
        return (tab);
    }
    return (tab);
}