#include <SDL2/SDL.h> 
#include <stdlib.h>
#include <stdio.h>

#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 768

#define CELL_WIDTH 28
#define CELL_HEIGHT 28

#define NB_CELLS_X 32
#define NB_CELLS_Y 24




//gcc main.c -o main -W -Wall -Wextra -Wvla -fsanitize=address $(sdl2-config --cflags) -lSDL2 -lm