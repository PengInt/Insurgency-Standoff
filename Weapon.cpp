/*
 * Created by Penguin Interactive on 10/04/2026.
 * v0.0.0
*/

#include <vector>

#include "include/Weapon.hpp"

#include "raylib.h"


static std::vector<Weapon*> weapons;

Weapon::Weapon(const char* tex_fpath, float bullet_spd, float bullet_dmg, float bullet_prc, int bullet_nb)
: Tex{0}, Tex_p(tex_fpath), BulletSPD(bullet_spd), BulletDMG(bullet_dmg), BulletPRC(bullet_prc), BulletNB(bullet_nb) {
    weapons.push_back(this);
}

void LoadWeapons() {
    for (Weapon* w : weapons) {
        w->Tex = LoadTexture(w->Tex_p);
    }
}


void UnloadWeapons() {
    for (Weapon* w : weapons) {
        UnloadTexture(w->Tex);
    }
    weapons.clear();
}

const Weapon JAF_M43  = Weapon("Assets/Weapons/JAF/M43.png", 110.0f, 15.0f, 5.0f, 1);
const Weapon JAF_M12  = Weapon("Assets/Weapons/JAF/M12.png", 70.0f, 5.0f, 3.0f, 10);
const Weapon JAF_M19  = Weapon("Assets/Weapons/JAF/M19.png", 90.0f, 10.0f, 4.0f, 1);

const Weapon LF_KL36  = Weapon("Assets/Weapons/LF/KL-36.png", 100.0f, 15.0f, 5.0f, 1);
const Weapon LF_MA14  = Weapon("Assets/Weapons/LF/MA-14.png", 70.0f, 5.0f, 3.0f, 10);
const Weapon LF_MA9   = Weapon("Assets/Weapons/LF/MA-9.png", 90.0f, 10.0f, 4.0f, 1);