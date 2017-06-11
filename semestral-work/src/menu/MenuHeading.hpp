#ifndef SEMESTRAL_WORK_MENUHEADING_HPP
#define SEMESTRAL_WORK_MENUHEADING_HPP

#include "../ColorPairGenerator.hpp"
#include "../Config.hpp"

#include "MenuItem.hpp"

/**
 * Menu heading class, which has the active style.
 */
class MenuHeading : public MenuItem {
public:
  /**
   * Constructor.
   * @param window ncurses window to work with
   * @param text text of the item
   */
  MenuHeading (WINDOW* window, const std::string text);

  void print (int numberOfItems) const override;

  /**
   * Activates the heading styles.
   */

  /**
   * Print of active heading with relative position.
   * @param numberOfItems
   */
  void activePrint (int numberOfItems);

private:
  /**
   * Determines if the heading is activeted or not.
   */
  bool active = false;

  /**
   * Color of the heading.
   */
  const short color = ColorPairGenerator::addColor(COLOR_YELLOW, 0);

  /**
   * Color of the active heading.
   */
  const short activeColor = ColorPairGenerator::addColor(COLOR_YELLOW + SW_COLOR_BRIGHT, 0);
};

#endif // SEMESTRAL_WORK_MENUHEADING_HPP
