#include <iostream>
#include<SFML/Graphics.hpp>

using namespace sf;

int main()
{
    RenderWindow window(VideoMode(400, 400), "Hello");
    window.display();
}