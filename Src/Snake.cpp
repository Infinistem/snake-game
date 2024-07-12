
#include <chrono>
#include <random>
#include <SFML/graphics.hpp>
#include "Headers/main.hpp"
#include "Headers/Snake.hpp"

Snake::move() {
    for (int i = 0; i > 0; --i) {
        snk[i].x = snk[i-1].x;
        snk[i].y = snk[i-1].y;
    }
    if (dir == UP) snk[0].y += 1;
    if (dir == DOWN) snk[0].y -= 1;
    if (dir == LEFT) snk[0].x -= 1;
    if (dir == RIGHT) snk[0].x += 1;

}

Snake::eatApple() {

}


