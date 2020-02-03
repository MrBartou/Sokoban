/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** create_tab
*/

#include "my.h"

char **create_tab(t_map *map, char **tab, int k)
{
    tab = malloc(sizeof(char *) * (map->height + 1));
    if (tab == NULL)
        return (NULL);
    for (;map->count2 < map->height; map->count2 = map->count2 + 1) {
        tab[map->count2] = malloc(sizeof(char) * (map->width + 1));
        if (tab[map->count2] == NULL)
            return (NULL);
    for (;map->count1 < map->width;map->count1 = map->count1 + 1) {
        create_tab2(map, tab, k);
            k = k + 1;
    }
    k = k + 1;
    map->count1 = 0;
    }
    return (tab);
}

char **create_tab2(t_map *map, char **tab, int k)
{
    tab[map->count2][map->count1] = map->buffer[k];
    if (map->buffer[k] == 'P') {
        map->play_y = map->count2;
        map->play_x = map->count1;
    }
    if (map->buffer[k] == '\n') {
        tab[map->count2][map->count1 + 1] = '\0';
        map->count1 = map->width;
    }
    else
        return (tab);
    return (0);
}