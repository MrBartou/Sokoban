/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** direction
*/

#include "my.h"

void set_direction(int ch, t_map *map)
{
    map->box_x = 0;
    map->box_y = 0;
    if (ch == KEY_LEFT) {
        key_left(map);
    }
    if (ch == KEY_RIGHT) {
        key_right(map);
    }
    if (ch == KEY_UP) {
        key_up(map);
    }
    if (ch == KEY_DOWN) {
        key_down(map);
    }
}