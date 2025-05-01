#ifndef ENGINE_H
#define ENGINE_H

#include <string>

class Engine {
  public:
    /** Runs the game loop. */
    void run();
    /** Reads user input. */
    void input();
    /** Updates game state. */
    void update();
    /** Renders game state. */
    void render() const;

  private:
    /** When true, the engine is running. */
    bool is_running = true;
    /** User input. */
    std::string user_input;
    /** current player position. */
    int player_pos = 0;
};

#endif