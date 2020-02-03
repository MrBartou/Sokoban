/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** key
*/

#include "my.h"

int key_right(t_map *map)
{
    map->box_x = 1;
    map->nb_moves = map->nb_moves + 1;
    return (0);
}

int key_left(t_map *map)
{
    map->box_x = -1;
    map->nb_moves = map->nb_moves + 1;
    return (0);
}

int key_up(t_map *map)
{
    map->box_y = -1;
    map->nb_moves = map->nb_moves + 1;
    return (0);
}

int key_down(t_map *map)
{
    map->box_y = 1;
    map->nb_moves = map->nb_moves + 1;
    return (0);
}