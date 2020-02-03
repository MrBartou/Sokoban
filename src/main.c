/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** main
*/

#include "my.h"

int	main(int ac, char **av)
{
    int	res;
    t_map	*map;

    map = malloc(sizeof(*map));
    if (map == NULL)
        return (RETURN_FAIL);
    res = RETURN_SUCCESS;
    if (ac != 2) {
        my_putstr("Usage : ./my_sokoban -h\n");
        return (RETURN_FAIL);
    }
    if (av[1][0] == '-' && av[1][1] == 'h') {
        usage();
    }else{
    res = my_read_map(av[1], map);
    return (res);
    }
}