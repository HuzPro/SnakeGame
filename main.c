#include <stdio.h>
#include <stdlib.h>
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "structs.h"
#include "defs.h"
#include "draw.c"
#include "init.c"
#include "input.c"
#include "cleanup.c"
#include "movement.c"


int main(int argc, char *argv[]) {

    memset(&app, 0, sizeof(App));
    memset(&snake, 0, sizeof(Snake));
    initSDL();
	
	snake.angle=0;
	snake.speed = 3;
	snake.direction = 0;
    snake.x = 200;
    snake.y = 200;
    snake.texture = loadTexture("images/snake/head-large.png");

    atexit(cleanup);

    while(1) {
        prepareScene();

        input();
		
		movement();

        blit(snake.texture, snake.x, snake.y);

        presentScene();

        SDL_Delay(1000 / FPS);
    }
}
