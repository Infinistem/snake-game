#pragma once

class Snake {
    public:
     int speed = 1; 
     struct snake_pos {int x, y} snk[100];
     enum DIRECTIONS dir = RIGHT;

     void move();
     void eatApple();

};
