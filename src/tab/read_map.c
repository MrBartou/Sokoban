/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** read_map
*/

#include "my.h"

int	my_read_map(char *str, t_map *map)
{
    int	fd;

    map->buffer = malloc(sizeof(char) * 5000);
    if (map->buffer == NULL)
        return (RETURN_FAIL);
    fd = open(str, O_RDONLY);
    if (fd == -1) {
        my_putstr("ERROR: Can not open file\n");
        return (RETURN_FAIL);
    }
    if (read(fd, map->buffer, 5000) < 0)
        return (RETURN_FAIL);
    map->buffer[5000] = '\0';
    init_map(map);
    free(map->buffer);
    return (RETURN_SUCCESS);
}