/*
 * Created by Penguin Interactive on 10/04/2026.
 * v0.0.0
 */

#ifndef INSURGENCY_STANDOFF_SOLDIER_HPP
#define INSURGENCY_STANDOFF_SOLDIER_HPP

#include "Weapon.hpp"

#include "raylib.h"

class Body {
    float Head, Torso, LArm, RArm, LLeg, RLeg;
    Body();
};

class Soldier {
    Body _Body;
    Weapon _Weapon;
    Soldier(Body body, Weapon weapon);
};


#endif //INSURGENCY_STANDOFF_SOLDIER_HPP