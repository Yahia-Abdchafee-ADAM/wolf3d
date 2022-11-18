#include "wolf3d_header.h"
#include <stdlib.h>

int main(int ac, char **av)
{
    wolf3d_t *wolf3d = malloc(sizeof(wolf3d_t));

    game_loop(wolf3d);
    return (EXIT_SUCCESS);
}
