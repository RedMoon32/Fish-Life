//
// Created by rinat on 03.07.19.
//

#ifndef MYPROJECT_TRIBE_H
#define MYPROJECT_TRIBE_H

#include <vector>
#include <SFML/Graphics/RenderWindow.hpp>
#include "vec2.h"
#include "Fish.h"

using namespace std;

#define WINDOW_MAX_X 400
#define WINDOW_MAX_Y 400

class Tribe {
public:
    Tribe(int x, int y, int numberOfFishes, sf::Color c);

    vector<Fish *> get_fishes();

    void updateAll();

    void drawAll(sf::RenderWindow &window);

private:
    sf::Color color;
    vector<Fish *> fishes;
    vec2<int> pos;
};

extern vector<Tribe *> tribes;

#endif //MYPROJECT_TRIBE_H
