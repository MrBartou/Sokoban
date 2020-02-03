/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** quit
*/

#include "my.h"

int	event_quit(int ch)
{
    if (ch == 113)
        return (0);
    return (1);
}