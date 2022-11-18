#include "wolf3d.h"
#include <stdlib.h>

int wolf3d_free(wolf3d_t *wolf3d)
{
    free(wolf3d);
    return (EXIT_SUCCESS);
}
