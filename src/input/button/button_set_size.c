/*
** EPITECH PROJECT, 2020
** MUL_input_widget
** File description:
** set state button
*/

#include "my_world.h"
#include "button.h"

int button_set_size(button_t *button, sfVector2f *size)
{
    if (size->x <= 0 || size->y <= 0)
        return EXIT_FAILURE;
    button->size = *size;
    return EXIT_SUCCESS;
}