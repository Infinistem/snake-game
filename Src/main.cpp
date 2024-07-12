// snake game //
#include <chrono>
#include <random>
#include <SFML/graphics.hpp>
#include "Headers/Game.hpp"
#include "Headers/main.hpp"
#include "Headers/Snake.hpp"

int main(int argc, char** argv) {

 Game game;
 Snake snake;

 Texture t1;
 t1.loadFromFile("Images\\snake.png");
 Sprite sprite1(t1);

Clock clock; // use a clock for speed
float timer=0, tick=snake.speed;

while (game.window.isOpen() && !game.over) {
    sf::Event event;
    float time = clock.getTimeElapsed().asSeconds();
    clock.restart();
    timer+=time;

    while (game.window.pollEvent(event)) {
        
        const sf::Input& input = game.window.GetInput();
        
        switch (event.type) {
            case sf::Event::Closed:
                game.window.close();
                break;
            case sf::Event::KeyPressed:
                if input.IsKeyDown(sf::Key::W) {
                    snake.dir = UP;
                }
                else if input.IsKeyDown(sf::Key::A) {
                    snake.dir = LEFT;
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
    if (timer > delay) {
        timer = 0;
        snake.move();
    }
    game.window.clear();

    game.init(); // render the grid pattern
    game.move(); // move 

    if (game.detectCollision()) {
        game.over = true;
    }
    // draw snake

    game.window.display();
   }

}