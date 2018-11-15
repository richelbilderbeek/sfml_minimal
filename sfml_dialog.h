#ifndef SFML_DIALOG_H
#define SFML_DIALOG_H

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

///Declaration of sfml_dialog
class sfml_dialog
{
public:
  sfml_dialog();
  void exec();
private:
  sf::RenderWindow m_window;
};

#endif // SFML_DIALOG_H
