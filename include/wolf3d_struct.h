#include <SDL2/SDL.h>
#ifndef WOLF3D_STRUCT_H_
    #define WOLF3D_STRUCT_H_

typedef struct point_s {
    double x;
    double y;
} point_t;

typedef struct wolf3d_s {
    point_t pos;
    point_t dir;
    point_t plan;
    int **map;
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_DisplayMode display_mode;
    SDL_Texture* texture;
} wolf3d_t;

#endif /* !WOLF3D_STRUCT_H_ */
