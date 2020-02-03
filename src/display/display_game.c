/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** display_game
*/

#include "my.h"

void display_game(char **tab, t_map *map)
{
    int i;

    i = 1;
    initscr();
    curs_set(FALSE);
    raw();
    keypad(stdscr, TRUE);
    noecho();
    while (i == 1) {
        clear();
        map->count2 = 0;
        i = display_more(tab, map, i);
    }
    endwin();
}