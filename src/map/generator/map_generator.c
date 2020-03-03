/*
** EPITECH PROJECT, 2019
** MUL_my_world_2019
** File description:
** map_generator
*/

#include "my_world.h"

void map_generator(map_t *map)
{
    static enum map_generator_mode mode = DEFAULT;

    switch (mode) {
        case SQUARE:
            map_generator_square(map);
            mode = DEFAULT;
            break;
        default:
            map_generator_default(map);
            mode = SQUARE;
            break;
    }
}
