#pragma once

#include <SFML/graphics.hpp>
#include "Headers/main.hpp"

class Game {
   public:
    int apples = 0;
    bool over = false;
    Pos appleloc;
    sf::Rect<T> applerect;
    sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "My window");
    
    int init();
    int generateApple();
    int random();
    void reset();
    bool detectCollision();
};



