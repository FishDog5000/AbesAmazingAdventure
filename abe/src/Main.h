#ifndef MAIN_H 
#define MAIN_H


#include <stdlib.h>
#include <string.h>
#include "SDL.h"
#include "SDL_thread.h"

#include "Common.h"
#include "Image.h"
#include "Font.h"
#include "Util.h"
#include "Sound.h"
#include "Splash.h"
#include "Menu.h"
#include "Map.h"
#include "MapIO.h"
#include "Monster.h"
#include "Editor.h"
#include "Game.h"

#define RUNMODE_SPLASH 0
#define RUNMODE_EDITOR 1
#define RUNMODE_GAME 2

int runmode;

SDL_Surface *screen;
int state;

void startEditor();
void startGame();

#endif
