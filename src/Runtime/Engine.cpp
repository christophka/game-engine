#include "Engine.h"

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
    if (user_input == "e") {
        player_pos++;
    } else if (user_input == "w") {
        player_pos--;
    }
}

void Engine::render() const {
    std::cout << "Player position: " << player_pos << std::endl;
}