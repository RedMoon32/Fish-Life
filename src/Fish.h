//
// Created by rinat on 02.07.19.
//

#ifndef MYPROJECT_FISH_H
#define MYPROJECT_FISH_H

#include <vector>
#include "Drawable.h"
#include "vec2.h"


enum class FishState {
    spawning, walking
};

class Fish {
public:
    Fish(int x, int y, int speed, bool hunter);

    void live();

    vec2<int> get_pos();

private:
    bool hunter = false;
    FishState state;
    int speed;

    void walk();

    void define_goal_and_state();

    vec2<int> pos;
    vec2<int> target_pos{-1, -1};
};

#endif //MYPROJECT_FISH_H
