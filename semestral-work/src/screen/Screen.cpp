#include <ncurses.h>
#include <string>

#include "Screen.hpp"

Screen::Screen () : window(newwin(getmaxy(stdscr), getmaxx(stdscr), 0, 0)) {}

Screen::~Screen () {
  delwin(window);
}

int Screen::process () {
  return SCREEN_OK;
}
