# Snake Game with SDL2 in C

A simple Snake game implemented in C using SDL2.

## Overview
This project showcases a Snake game developed using the SDL2 library in C. The game revolves around a growing snake that feasts on apples while evading collisions with itself. Additionally, when encountering the window boundaries, the snake reappears on the opposite side of the screen.

## Features

- Classic Snake gameplay
- SDL2 for graphics and input handling
- Collision detection
- Menu functionality

## Screenshots

![Menu](https://github.com/HuzPro/SnakeGame/assets/35820756/e4aa2ee3-ef4f-4ef5-9f4c-f6ff30b60434)
![GamePlay](https://github.com/HuzPro/SnakeGame/assets/35820756/150cbebf-f6f9-4b68-8e7c-1a840800f8dd)


## Getting Started

### Prerequisites

- C compiler (GCC recommended) with MinGW for Windows
- SDL2 library installed

### Installation

1. Clone the repository:

    ```bash
    git clone https://github.com/HuzPro/SnakeGame.git
    ```

2. Download the additional files from [this link](https://drive.google.com/drive/folders/1j1jP1DlUUA66BoUBQLa6dP9c52CbiGYB) and place them in the same directory as the cloned repository files.

3. Compile the game:

    ```bash
    gcc -std=c99 main.c -I SDL2 -L lib -Wall -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_ttf -o main
    ```


### Usage

Run the compiled executable to start the game:

```bash
.\main.exe
```

Use arrow keys to control the snake and mouse to navigate the menu.

### Game Controls

- Arrow keys: Move the snake
- Escape key: Open/close menu


Absolutely, you can update the README to include a section about collaboration and attributions:

### Game Controls

- Arrow keys: Move the snake
- Escape key: Open/close menu

### Acknowledgements

- **SDL2 Library:** Thanks to the creators and maintainers of [SDL2](https://www.libsdl.org/) for providing the graphics and input handling library.
  
- **Sherry:** Special thanks to [Sherry](https://github.com/Raysh454) for their collaboration on various aspects of the game's development.

- **Documentation:** Gratitude to [SDL2 documentation](https://wiki.libsdl.org/SDL2/FrontPage) for their informative resources, great tutorials and libraries that aided in understanding game development using SDL2.


### Collaboration

This project was a collaborative effort between [Huz](https://github.com/HuzPro) and [Sherry](https://github.com/Raysh454). Both contributors worked together to develop and refine various aspects of the game, including gameplay, graphics, and functionality.

Feel free to add more details or specify each person's contributions if needed.


This `README.md` provides an introductory overview, installation instructions, usage details, controls and collaboration details.
