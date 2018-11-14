#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>

int main()
{
  sf::RenderWindow window(sf::VideoMode(320, 200), "Minimal SFML program");

  sf::CircleShape shape;
  shape.setRadius(50);
  shape.setPosition(160 - 50, 100 - 50);
  while (window.isOpen())
  {
    sf::Event event;
    while (window.pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
      {
        window.close();
      }
    }
    window.clear(sf::Color(0, 0, 0));
    window.draw(shape);
    window.display();
  }
}
