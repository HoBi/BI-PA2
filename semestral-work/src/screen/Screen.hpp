#ifndef SEMESTRAL_WORK_SCREEN_HPP
#define SEMESTRAL_WORK_SCREEN_HPP

#include <ncurses.h>

#include "../Config.hpp"

// Continue in the current screen
#define SCREEN_CONTINUE 1

// Exit the current screen
#define SCREEN_EXIT 2

/**
 * Provides basic console screen unit and it's functionality.
 */
class Screen {
public:
  /**
   * Constructor initializes the ncurses window.
   */
  Screen ();

  /**
   * Virtual destructor destroying the ncurses window.
   */
  virtual ~Screen ();

  /**
   * Processes the screen purpose, loops etc.
   *
   * @return process status code.
   */
  virtual int process ();
protected:
  /**
   * Generic new window of this screen.
   */
  WINDOW* window;
};

#endif // SEMESTRAL_WORK_SCREEN_HPP
