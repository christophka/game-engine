#include "Engine.h"

#include <glm/vec2.hpp>
#include <iostream>
#include <string>

void Engine::run() {
    while (is_running) {
        input();
        update();
        render();
    }
}

void Engine::input() {
    // input
    std::cout << "Enter a command (exit): ";
    std::cin >> user_input;

    std::cout << "user input: " << user_input << std::endl;
    if (user_input == "exit") {
        is_running = false;
    }
}

void Engine::update() {
    // update
    glm::vec2 move = glm::vec2(0.0F, 0.0F);
    if (user_input == "e") {
        move = glm::vec2(1.0F, 0.0F);
    } else if (user_input == "w") {
        move = glm::vec2(-1.0F, 0.0F);
    }
    player_pos += (move);
}

void Engine::render() const {
    std::cout << "Player position: " << player_pos.x << std::endl;
}