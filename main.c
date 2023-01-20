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


int main(int argc, char *argv[]) {

    memset(&app, 0, sizeof(App));
    memset(&snake, 0, sizeof(Snake));
    initSDL();
	
	snake.speed = 3;
	snake.direction = 0;
    snake.x = 200;
    snake.y = 200;
    snake.texture = loadTexture("images/snake/head-large.png");

    atexit(cleanup);

    while(1) {
        prepareScene();

        input();
		
		//SnakeMovement
        if(app.up && !app.down && !app.left && !app.right){
            if (snake.direction != 2) snake.direction = 1;
        }
        if(app.down && !app.left && !app.right && !app.up){
            if(snake.direction != 1)snake.direction = 2;
        }
        if(app.left && !app.right && !app.up && !app.down){
            if(snake.direction != 4)snake.direction = 3;
        }
        if(app.right && !app.left && !app.up && !app.down){
            if(snake.direction != 3)snake.direction = 4;
        }
        
        switch(snake.direction){
        	case 1:
        		snake.y -= snake.speed;
        		break;
        	case 2:
        		snake.y += snake.speed;
        		break;
        	case 3:
        		snake.x -= snake.speed;
        		break;
        	case 4:
        		snake.x += snake.speed;
        		break;
        	default:
        		break;
		}
		//EndOfSnakeMovement

        blit(snake.texture, snake.x, snake.y);

        presentScene();

        SDL_Delay(1000 / FPS);
    }
}
