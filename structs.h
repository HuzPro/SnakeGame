typedef struct {
    SDL_Renderer *renderer;
    SDL_Window *window;

    int up;
    int down;
    int left;
    int right;

} App;

typedef struct {
	int direction; //1 = up ^, 2 = down v, 3 = left <, 4 = right >
    int x;
    int y;
    int speed;
    SDL_Texture *texture;
} Snake;

App app;
Snake snake;
