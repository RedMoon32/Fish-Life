//
// Created by rinat on 02.07.19.
//

#include "Fish.h"
#include <SFML/Graphics.hpp>
#include "Tribe.h"

vec2<int> get_random_cord() {
    return vec2<int>{rand() % WINDOW_MAX_X, rand() % WINDOW_MAX_Y};
}

Fish::Fish(int x, int y, int speed, bool hunter) {
    pos.x = x;
    pos.y = y;
    this->speed = speed;
    this->hunter = hunter;
}

vec2<int> Fish::get_pos() {
    return pos;
}

void Fish::live() {
    if (target_pos.x == -1) {
        target_pos = get_random_cord();
    }
    walk();
}

void Fish::walk() {
    int xmult, ymult;
    xmult = ymult = 1;

    if (target_pos.x < pos.x)
        xmult = -1;
    if (target_pos.y < pos.y)
        ymult = -1;

    if (abs(target_pos.x - pos.x) < speed)
        pos.x = target_pos.x;
    else
        pos.x += speed * xmult;

    if (abs(target_pos.y - pos.y) < speed)
        pos.y = target_pos.y;
    else
        pos.y += speed * ymult;
}

void Fish::define_goal_and_state() {
    if (hunter) {

    }
}

