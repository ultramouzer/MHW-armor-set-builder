#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Skill.h"
#include "Armor.h"

using namespace std;

int main(int argc, char *argv[]){
    vector<Armor> armors;
    populateArmor("armor_data.csv", armors);
    armors[452].print();
}
void populateArmor(string filename, vector<Armor> armors){
    string line;
    
    ifstream file(filename);
    getline(data, line);//skip first line
    while(getline(file, line)){
        vector<string> ar = split(line, ',');
        int res[] = {stoi(ar[13]), stoi(ar[14]), stoi(ar[16]), stoi(ar[15]), stoi(ar[17])};
        vector<Skill> skills;
        for(int i = 26; i < 32; i+=2){
            Skill skl;
            skl.lvl = stoi(ar[i+1]);
            if(skl.lvl != 0){
                skl.name = ar[i];
                skills.push_back(skl);
            }
        }
        Deco slot1;
        slot1.size = stoi(ar[19]);
        Deco slot2;
        slot2.size = stoi(ar[20]);
        Deco slot3;
        slot3.size = stoi(ar[21]);
        Deco slots[] = {slot1, slot2, slot3};
        armors.push_back(Armor(ar[0], ar[5], stoi(ar[6]), res, skills, slots));
    }
}

/*void freeArmor(vector<Armor> armors){

}*/

vector<string> split(string s, char del)
{
    vector<string> strings;
    stringstream ss(s);
    string word;
    while (!ss.eof()) {
        getline(ss, word, del);
        strings.push_back(word);
    }
    return strings
}
//Name,                     0
//Index,
//Order,
//Variant,Set(layered) id,
//Type,
//Equip Slot,               5
//Defense,                  6
//Model id 1,
//Model id 2,
//icon color, 
//icon effect, 
//rarity,                  11
//cost,
//fire res,                13
//water res,               14
//ice res,                 15
//thunder res,             16
//dragon red,              17
//slot count,              18
//slot 1 size,             19
//slot 2 size,             20
//slot 3 size,             21
//set skill 1,             22
//set skill 1 level,
//hidden skill,
//hidden skill level,
//skill 1,                 26
//skill 1 level,           27
//skill 2,                 28
//skill 2 level,           29
//skill 3,                 30
//skill 3 level,           31
//gender,
//set group,
//is permanent,description