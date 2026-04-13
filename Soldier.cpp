/*
 * Created by Penguin Interactive on 10/04/2026.
 * v0.0.0
 */

#include "include/Soldier.hpp"

Body::Body()
: Head(5), Torso(12.5), RArm(7.5), LArm(7.5), LLeg(7.5), RLeg(7.5) { }


Soldier::Soldier(Body body, Weapon weapon)
: _Body(body), _Weapon(weapon) { }
