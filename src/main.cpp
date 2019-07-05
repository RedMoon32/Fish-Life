#include <SFML/Graphics.hpp>
#include <iostream>
#include "Tribe.h"
#include "Fish.h"

using namespace std;

void init_window() {
    sf::RenderWindow window(sf::VideoMode(WINDOW_MAX_X, WINDOW_MAX_Y), "SFML works!");
    Tribe tribe1(50, 50, 30, sf::Color(255, 0, 0));
    window.setFramerateLimit(30);
    while (window.isOpen()) {
        window.clear();
        tribe1.updateAll();
        tribe1.drawAll(window);
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