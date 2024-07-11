#include <windows.h>
#include <chrono>
#include <random>
#include <SFML/graphics.hpp>
#include "Headers/Snake.hpp"
#include "Headers/main.hpp"

Snake::init() { // draw constnat stuff (not snake)
    // draw menu bar
    sf::RectangleShape header;
    header.setSize(sf::Vector2f(WIDTH, 40));
    header.setOutlineColor(sf::Color::Green);
    header.setFillColor(sf::Color::Lime);
    header.setOutlineThickness(5);
    header.setPosition(10, 20);
    window.draw(header);

    int cell_width = WIDTH / CELL_X;
    int cell_height = HEIGHT / CELL_Y;

    for (size_t i = 0; i < CELL_X; i++) {
       for (size_t j = 0; j < CELL_Y; i++) {
            // generate squares
            sf::RectangleShape cell;
       }
    }
    


}
Snake::detectCollision() { // detect collision with self or apple

}

Snake::generateApple() {

}
Snake::eatApple() {

}

Snake::random() {
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> xval(1,CELL_X);
    std::uniform_int_distribution<std::mt19937::result_type> yval(1,CELL_Y);
}