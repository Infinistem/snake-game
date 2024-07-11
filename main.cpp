// snake game

#include <windows.h>
#include <chrono>
#include <random>
#include <SFML/graphics.hpp>
#include "Headers/Snake.hpp"
#include "Headers/main.hpp"

int main(int argc, char** argv) {

    while (window.isOpen()) {
        Snake game;

        sf::Event event;
        while (game.window.pollEvent(event)) {
            const sf::Input& input = game.window.GetInput();
            
            switch (event.type) {
                case sf::Event::Closed:
                    game.window.close();
                    break;
                case sf::Event::KeyPressed:
                    if input.IsKeyDown(sf::Key::W) {
                        game.dir = UP;
                    }
                    else if input.IsKeyDown(sf::Key::A) {
                        game.dir = LEFT;
                    }
                    else if input.IsKeyDown(sf::Key::S) {
                        game.dir = DOWN;
                    }
                    else if input.IsKeyDown(sf::Key::D) {
                        game.dir = RIGHT;
                    }
                    break;
            }
        }

        game.window.clear(sf::Color::White);

        game.init(); // render the grid pattern
        game.move(); // move and draw snake
        game.detectCollision(); 

        window.display();
    }

    return 0;
}