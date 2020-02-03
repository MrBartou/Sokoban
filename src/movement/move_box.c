/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** move_box
*/

#include "my.h"

void event_move_box(char **tab, t_map *map)
{
    if (is_free(tab, map->play_y + map->box_y, map->play_x + map->box_x) < 0)
        if (is_free(tab, map->play_y + map->box_y * 2, \
            map->play_x + map->box_x * 2) > 0) {
            if (check_spot(map, map->play_y, map->play_x) == 1)
                tab[map->play_y][map->play_x] = 'O';
            else
                tab[map->play_y][map->play_x] = ' ';
            map->play_y = map->play_y + map->box_y;
            map->play_x = map->play_x + map->box_x;
            tab[map->play_y][map->play_x] = 'P';
            tab[map->play_y + map->box_y][map->play_x + map->box_x] = 'X';
        }
    event_move(tab, map);
}