#include<stdio.h>
#include<stdlib.h>
#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>
#include "structs.h"
#include "defs.h"
#include "draw.c"
#include "init.c"
#include "input.c"
#include "cleanup.c"


int main(int argc, char *argv[]) {

    memset(&app, 0, sizeof(App));
    memset(&snake, 0, sizeof(Snake));
    initSDL();

    snake.x = 100;
    snake.y = 100;
    snake.texture = loadTexture("images/snake/head-large.png");

    atexit(cleanup);

    while(1) {
        prepareScene();
        input();
        blit(snake.texture, snake.x, snake.y);
        presentScene();
        SDL_Delay(1000 / FPS);
    }
}
