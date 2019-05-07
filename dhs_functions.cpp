#include "dhs_functions.h"

#include <iostream>
#include <cassert>

void load_texture(sf::Texture& texture, const std::string& file_name)
{
  assert(file_name != "");

  if (!texture.loadFromFile(file_name))
  { std::cerr << file_name << " not found!\n";	}
}

void init_sprite(sf::Sprite& sprite, sf::Texture& texture,
                 const sf::Vector2f& origin, const sf::Vector2f& position,
                 const sf::Color& color)
{
  sprite.setTexture(texture);
  sprite.setOrigin(origin);
  sprite.setPosition(position);
  sprite.setColor(color);
}

void color_picker(int square_identity, sf::Color& colors, sf::Color& multicolor)
{
  sf::Color white{255, 255, 255}, grey{128, 128, 128}, black{0, 0, 0};
  sf::Color red{255, 0, 0}, orange{255, 128, 0}, yellow{255, 255, 0};
  sf::Color green{0, 255, 0}, aqua{0, 255, 255}, blue{0, 0, 255};
  sf::Color violet{128, 0, 255}, dark{24, 24, 24};

  if (square_identity <= 0)
  {	colors = black;	}

  if (square_identity == 1)
  {	colors = grey; }

  if (square_identity == 2)
  {	colors = multicolor; }

  if (square_identity == 3)
  {	colors = dark; }

  if (square_identity == 4)
  {	colors = violet; }

  if (square_identity == 5)
  {	colors = red;	}

  if (square_identity == 6)
  {	colors = yellow; }

  if (square_identity == 7)
  {	colors = green;	}

  if (square_identity == 8)
  {	colors = blue; }

  if (square_identity == 9)
  { colors = orange; }

  if (square_identity == 10)
  {	colors = white; }

  if (square_identity == 11)
  {	colors = aqua; }

  if (square_identity > 11)
  {	colors = black;}

}
