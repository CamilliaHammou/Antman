/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-BSQ-camillia.hammou
** File description:
** bsq
*/

#include <stdio.h>
#include <stdlib.h>

int fs_open_file(char const *filepath);

void my_putchar(char c);

char *fs_read_file(int fs, char const *filepath);

int my_get_nbr(char *str);

int file_size(char const *filpath);

void check_lignes(char *map, int nbr);

int my_error(char *error);

int main(int ac, char **av)
{
    char *filepath = av[1];
    int file_descriptor = fs_open_file(filepath);
    char *test = fs_read_file(file_descriptor, filepath);
    char *number = malloc(sizeof(char) * 20);
    int filetype = my_get_nbr(av[2]);
    int i = 0;
    if (test[0] == '\0')
        return (84);
    if (ac > 2 && ac < 4) {
        if (filetype < 1 || filetype > 3) {
            return my_error(" attention entre 1 et 3");
    } else {
        return (84);
    }
    return (0);
    }
}