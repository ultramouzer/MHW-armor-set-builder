#include <iostream>
#include "Weapon.h"
using namespace std;

Weapon::Weapon(string name_, Element ele_, int raw_, int aff_, int[5] sharp_, Skill skl_, Deco slots_[]){
    name = name_;
    ele = ele_;
    raw = raw_;
    aff = aff_;
    sharp = sharp_;
    skl = skl_;
    slots = slots_;
}

string Weapon::getName(){ return name; }
Element Weapon::getElement(){ return element; }
int Weapon::getRawVal(){ return rawVal; }
int Weapon::getEleVal(){ return eleVal; }
int Weapon::getAff(){ return aff; }
int[] Weapon::getSharp(){ return sharp; }
Skill Weapon::getSkill(){ return skl; }