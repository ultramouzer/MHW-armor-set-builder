#include <iostream>
#include "Hunter.h"
using namespace std;

Hunter::Hunter(Weapon wp_, Armor parts_[], Charm ch_){
    wp = wp_;
    parts = parts_;
    ch = ch_;
    efr = wp.getRaw() * (1 + 0.25 * (float)aff * 0.01) * wp.getSharp().raw;
    efe = wp.getEle()* wp.getSharp().ele;
    def = 0;
    res = [0, 0, 0, 0, 0];
    for(int i = 0; i < 5; i++){
        def += parts[i].getDef();
        for(int j = 0; j < 5; j++){
            res[j] += parts[i].getRes()[j];
        }
    }
}

//loop through equipment and add skills
Hunter::initializeSkillsMap(){
    addSkill(wp.getSkill);
    addSkill(ch.skl);
    for(int i = 0; i < parts.length; i++){
        if(parts[i] != NULL){
            for(int j = 0; j < parts[i].getSkills.length; j++){
                addSkill(parts[i].getSkills[j]);
            }
        }
    }
}

void Hunter::addSkill(Skill skl){
    if(skl == NULL){ return; }
    if(skills.count(skl.name)==0){
        skills.insert(pair<string,int>(skl.name, skl.lvl));
        return;
    }
    skills[skl.name] += skl.lvl;
}