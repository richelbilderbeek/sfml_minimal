#include "sfml_dialog.h"

///Definitions of sfml_dialog

sfml_dialog::sfml_dialog()
  : m_window{sf::VideoMode(320, 200), "Minimal SFML program"}
{

}

void sfml_dialog::exec()
{
  sf::CircleShape shape;
  shape.setRadius(50);
  shape.setPosition(160 - 50, 100 - 50);
  while (m_window.isOpen())
  {
    sf::Event event;
    while (m_window.pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
      {
        m_window.close();
      }
    }
    m_window.clear(sf::Color(0, 0, 0));
    m_window.draw(shape);
    m_window.display();
  }
}
