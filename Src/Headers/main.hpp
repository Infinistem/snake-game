#pragma once

#include <random>

// constants and globals
const int WIDTH = 800;
const int HEIGHT = 800;
const int CELL_X = 10;
const int CELL_Y = 10;
const int SPEED = 1;

struct Pos { int x, y};
enum DIRECTIONS { UP,DOWN,LEFT,RIGHT,STOPPED};

