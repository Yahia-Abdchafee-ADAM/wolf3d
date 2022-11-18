#include "wolf3d.h"

int initialisation(wolf3d_t *wolf3d)
{
    wolf3d->pos.x = 0;
    wolf3d->pos.y = 0;
    wolf3d->dir.x = 0;
    wolf3d->dir.y = 0;
    wolf3d->plan.x = 0;
    wolf3d->plan.y = 0;
    wolf3d->map = malloc(sizeof(int*) * (mapWidth + 1));
    for (int i = 0; i != mapHeight; i++)
        wolf3d->map[i] = malloc(sizeof(int) * (mapHeight + 1));
    wolf3d->map[mapWidth] = NULL;
    for (int i = 0; wolf3d->map[i] != NULL; i++) {
        for (int j = 0; j != (mapHeight + 1); j++) {
            wolf3d->map[i][j] = 0;
        }
        wolf3d->map[i][mapHeight] = -1;
    }
    wolf3d->map[mapWidth] = NULL;
    return (EXIT_SUCCESS);
}
