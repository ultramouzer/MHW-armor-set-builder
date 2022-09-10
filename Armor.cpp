#include <iostream>
#include "Armor.h"
using namespace std;

Armor::Armor(string name_, string part_, int def_, int res_[5], vector<Skill> skills_, Deco slots_[3]){
    name = name_;
    part = part_;
    def = def_;
    //res = res_;
    
    skills = skills_;
    slots = slots_;
}

int Armor::getDef(){ return def; }
int* Armor::getRes(){ return res; }
list<Skill> Armor::getSkills(){ return skills; }

void Armor::print(){
    cout << "name: " << name << endl;
    cout << "part: " << part << endl;
    cout << "def: "  << def  << endl;
    printf("res: %d, %d, %d, %d, %d\n", res[0], res[1], res[2], res[3], res[4]);
    cout << "skills:" << endl;
    for(int i = 0; i < skills.size(); i++){
        printf("    %s, lvl %d\n", skills[i].name, skills[i].lvl);
    }
    cout << "slots:" << endl;
    for(int i = 0; i < slots.size(); i++){
        switch(slots[i].size){
            case 0:
                cout << " ---";
                break;
            case 1;
                cout << " o--";
                break;
            case 2;
                cout << " oo-";
                break;
            case 3;
                cout << " ooo";
                break;
        }
    }
}