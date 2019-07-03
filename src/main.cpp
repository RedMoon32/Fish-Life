#include <SFML/Graphics.hpp>
#include <iostream>
#include "Tribe.h"
#include "Fish.h"

using namespace std;

void init_window() {
    sf::RenderWindow window(sf::VideoMode(400, 400), "SFML works!");
//    sf::CircleShape shape(100.f);
//    shape.setFillColor(sf::Color::Green);
//
//    while (window.isOpen()) {
//        sf::Event event;
//        while (window.pollEvent(event)) {
//            if (event.type == sf::Event::Closed)
//                window.close();
//        }
//        window.draw(shape);
//        window.display();
//    }
    Tribe tribe1(50, 50, 30, sf::Color(255, 0, 0));
    Tribe tribe2(350, 50, 30, sf::Color(0, 255, 0));
    Tribe tribe3(200, 200, 30, sf::Color(0, 0, 255));
    while (window.isOpen()) {
        tribe1.drawAll(window);
        tribe2.drawAll(window);
        tribe3.drawAll(window);
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.display();
    }

}

int main() {
    init_window();
}