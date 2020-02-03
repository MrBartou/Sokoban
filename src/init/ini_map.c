/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** ini_map
*/

#include "my.h"

int	init_map(t_map *map)
{
    char **tab;

    tab = NULL;
    map->height = 0;
    map->spot = malloc(sizeof(int) * 5000);
    if (map->spot == NULL)
        return (RETURN_FAIL);
    init_width(map);
    map->count1 = 0;
    ini_test(map);
    map->count1 = 0;
    map->count2 = 0;
    tab = create_tab(map, tab, 0);
    if (tab == NULL)
        return (RETURN_FAIL);
    init_spot(tab, map);
    display_game(tab, map);
    free_this(tab, map);
    return (RETURN_SUCCESS);
}