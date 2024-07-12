#include <chrono>
#include <random>
#include <SFML/graphics.hpp>
#include "Headers/Game.hpp"
#include "Headers/main.hpp"

int getColor(n) {
    if (n % 2 == 0) {
        return sf::Color::Lime;
    }
    else {
        return sf::Color::Green;
    }
}

Game::init() { // draw constnat stuff (not snake)
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
    short n = 0;
    
    for (size_t i = 0; i < CELL_X; i++) {
       for (size_t j = 0; j < CELL_Y; i++) {
            // generate squares
            sf::RectangleShape cell;
            cell.setFillColor(getColor(n));
            cell.setPosition(cell_width * i, cell_height * j);
            cell.setSize(sf::Vector2f(cell_width, cell_height));
            window.draw(cell);
            n++;
       }
    }

}
Game::detectCollision() { // detect collision with self or apple, or sides
    
}

Game::generateApple() {

}
Game::eatApple() {

}

Game::random() {
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> xval(1,CELL_X);
    std::uniform_int_distribution<std::mt19937::result_type> yval(1,CELL_Y);
}