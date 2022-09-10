#ifndef HUNTER_H
#define HUNTER_H
#include <map>
#include "Weapon.h"
#include "Armor.h"

class Hunter{
    private:
        int efr;
        int efe;
        int def;
        int res[5];
        Armor parts[5];
        Weapon wp;
        Charm ch;
        map<string, int> skills;
    public:
        Hunter(Weapon wp_, Armor parts_[], Charm ch_);
        void initializeSkillsMap();
        void addSkill(Skill skl);
}

#endif