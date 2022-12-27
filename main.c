#include<stdio.h>
#include<stdlib.h>
#include<SDL2/SDL.h>
#include "structs.h"
#include "defs.h"
#include "draw.c"
#include "init.c"
#include "input.c"
#include "cleanup.c"


int main(int argc, char *argv[]) {

    memset(&app, 0, sizeof(App));
    initSDL();
    atexit(cleanup);

    while(1) {
        prepareScene();
        input();
        presentScene();
        SDL_Delay(16);
    }
}
