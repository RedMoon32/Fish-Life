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

class Tribe {
public:
    Tribe(int x,int y,int numberOfFishes, sf::Color c);
    sf::Color color;
    vector<Fish *> fishes;
    vec2<int> pos;
    void drawAll(sf::RenderWindow& window);
};


#endif //MYPROJECT_TRIBE_H
