/*
 *               Insurgency  Standoff
 *               Penguin  Interactive
 * Start:                                10/04/2026
 * Year of Current Version's Release:    dd/mm/yyyy
 * Version:                                   0.0.0
 *
 *     A Military Simulation game where the Joint Administrative Force (JAF), representing the local government, faces
 * off against the Liberation Front (LF), representing the people of the country (insurgents), in an attempt to regain
 * control of the country.
 *
 *     |    DETAIL    |    JAF     |    LF     |
 *     | Representing | Government |  People   |
 *     |   Doctrine   | Capitalism | Communism |
 *
 */

#include <iostream>
#include <string>

#include "Weapon.hpp"
#include "Soldier.hpp"

#include <raylib.h>


const std::string version = "0.0.0";
const std::string app_name = "Insurgency Standoff";
const std::string full_app_name = app_name + " " + version;
int main() {
    InitWindow(800, 800, full_app_name.c_str());

    LoadWeapons();

    while (!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(WHITE);
            DrawTexturePro(JAF_M43.Tex, {0, 0, 16, 16}, {16, 16, 64, 64}, {0, 0}, 0, WHITE);
            DrawTexturePro(JAF_M12.Tex, {0, 0, 16, 16}, {96, 16, 64, 64}, {0, 0}, 0, WHITE);
            DrawTexturePro(JAF_M19.Tex, {0, 0, 16, 16}, {176, 16, 64, 64}, {0, 0}, 0, WHITE);

            DrawTexturePro(LF_KL36.Tex, {0, 0, 16, 16}, {16, 96, 64, 64}, {0, 0}, 0, WHITE);
            DrawTexturePro(LF_MA14.Tex, {0, 0, 16, 16}, {96, 96, 64, 64}, {0, 0}, 0, WHITE);
            DrawTexturePro(LF_MA9.Tex, {0, 0, 16, 16}, {176, 96, 64, 64}, {0, 0}, 0, WHITE);
        EndDrawing();
    }

    UnloadWeapons();
    CloseWindow();
    return 0;
}