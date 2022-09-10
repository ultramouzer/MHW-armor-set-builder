#ifndef ARMOR_H
#define ARMOR_H
#include "Skill.h"
#include <vector>

class Armor {
    private:
        string name;
        string part;
        int def;
        int res[5];
        vector<Skill> skills;
        Deco slots[3];
    public:
        Armor(string name_, string part_, int def_, int res_[5], vector<Skill> skills_, Deco slots[3]);

        int getDef();
        int* getRes();
        void addDeco();
        void removeDeco();
        vector<Skill> getSkills();
};

#endif