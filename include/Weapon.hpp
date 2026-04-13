/*
 * Created by Penguin Interactive on 10/04/2026.
 * v0.0.0
*/

#ifndef INSURGENCY_STANDOFF_WEAPON_HPP
#define INSURGENCY_STANDOFF_WEAPON_HPP

#include <raylib.h>

class Weapon {
public:
    Texture2D Tex;
    const char* Tex_p;
    float BulletSPD, BulletDMG, BulletPRC; int BulletNB;
    Weapon(const char* tex_fpath, float bullet_spd, float bullet_dmg, float bullet_prc, int bullet_nb);
};

void LoadWeapons();
void UnloadWeapons();

extern const Weapon JAF_M43;
extern const Weapon JAF_M12;
extern const Weapon JAF_M19;

extern const Weapon LF_KL36;
extern const Weapon LF_MA14;
extern const Weapon LF_MA9;

#endif //INSURGENCY_STANDOFF_WEAPON_HPP