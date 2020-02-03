/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** display
*/

#include "my.h"

int	display_more(char **tab, t_map *map, int i)
{
    int	ch;
    int	x;
    int	y;

    for (;map->count2 < map->height; map->count2 = map->count2 + 1) {
        y = LINES / 2 + map->count2;
        x = COLS / 2;
        if (COLS < map-> width || LINES < map->height + 1)
            mvprintw(LINES / 2, x - 10, "Terminal trop petit !");
        else
            mvprintw(y - map->height / 2, x - map->width / 2, tab[map->count2]);
    }
    y = LINES / 2 - map->height / 2 - 1;
    ch = getch();
    print_map(ch, tab, map);
    if (event_quit(ch) == 0)
        return (0);
    i = check_win(tab, map);
    return (i);
}

int print_map(int ch, char **tab, t_map *map)
{
    refresh();
    tab = event_reset(ch, tab, map);
    set_direction(ch, map);
    event_move_box(tab, map);
    return (0);
}