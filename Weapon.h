#ifndef WEAPON_H
#define WEAPON_H
#include "Skill.h"

typedef struct Augment{
    string name;
    int slots;
}Augment;

typedef struct Element{
    string name;
    int val;
    bool latent;
}

class Weapon{
    private:
        string name;
        string ele;
        int raw;
        int aff;
        Sharpness sharp;
        Skill skl;
        Deco slots[];
        Augment augs[];
    public:
        Weapon(string name, Element ele, int raw, int aff, int sharp[5], Skill skl, Deco slots[]);

        string getName();
        Element getElement();
        int getRawVal();
        int getEleVal();
        int getAff();
        int[] getSharp();
        Skill getSkill();
}

#endif