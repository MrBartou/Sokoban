/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

typedef	struct s_map
{
    int width;
    int height;
    int count1;
    int count2;
    char *buffer;
    int *spot;
    int end_spot;
    int nb_moves;
    int play_x;
    int play_y;
    int box_x;
    int box_y;
}t_map;

# define RETURN_SUCCESS 0
# define RETURN_FAIL 84

int usage(void);
int my_putstr(char const *str);
int	init_map(t_map *map);
char **create_tab(t_map *map, char **tab, int k);
void free_this(char **tab, t_map *map);
void display_game(char **tab, t_map *map);
int	is_free(char **tab, int y, int x);
void set_direction(int ch, t_map * map);
void event_move_box(char **tab, t_map * map);
int ini_test(t_map *map);
int	main(int ac, char **av);
int	my_read_map(char *str, t_map *map);
void init_width(t_map *map);
void init_spot(char **tab, t_map *map);
int	display_more(char **tab, t_map *map, int i);
char **event_reset(int ch, char **tab, t_map *map);
int	event_quit(int ch);
int	check_spot(t_map *map, int y, int x);
void event_move(char **tab, t_map *map);
int my_putchar(char c);
int key_right(t_map *map);
int key_left(t_map *map);
int key_up(t_map *map);
int key_down(t_map *map);
int change_map(t_map *map, int k);
int print_map(int ch, char **tab, t_map *map);
char **create_tab2(t_map *map, char **tab, int k);
int	check_win(char **tab, t_map *map);

#endif /* !MY_H_ */
