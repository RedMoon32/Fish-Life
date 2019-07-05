//
// Created by rinat on 03.07.19.
//


#include "Tribe.h"
#include "Fish.h"
#include <stdlib.h>
#include <time.h>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/Color.hpp>

vector<Tribe *> tribes;

Tribe::Tribe(int x, int y, int numberOfFishes, sf::Color color) {
    pos.x = x;
    pos.y = y;
    srand(time(NULL));
    for (int i = 0; i < numberOfFishes; i++) {
        int xdelta = rand() % 20;
        int ydelta = rand() % 20;
        if (xdelta % 2 == 0)
            xdelta *= -1;
        if (ydelta % 2 == 0)
            ydelta *= -1;
        Fish *f = new Fish(pos.x + xdelta, pos.y + ydelta, 5, false);
        fishes.push_back(f);
    }
    this->color = color;
}

void Tribe::drawAll(sf::RenderWindow &window) {
    for (auto fish:fishes) {
        sf::CircleShape shape(5);
        auto pos = fish->get_pos();
        shape.setPosition(pos.x, pos.y);
        shape.setFillColor(sf::Color::Black);
        shape.setOutlineThickness(2);
        shape.setOutlineColor(color);
        window.draw(shape);
    }
}

vector<Fish *> Tribe::get_fishes() {
    return fishes;
}

void Tribe::updateAll() {
    for (auto fish:fishes) {
        fish->live();
    }
}
