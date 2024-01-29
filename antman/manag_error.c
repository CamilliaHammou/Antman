/*
** EPITECH PROJECT, 2022
** antman
** File description:
** manag_error
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int my_strlen(char const *str)
{
    int i;
    for (i = 0; str[i]; i++);
    return i;
}

int my_error(char *error)
{
    write(2, error, my_strlen(error));
    return (84);
}