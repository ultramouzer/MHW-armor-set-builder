#ifndef SKILL_H
#define SKILL_H

typedef struct Skill{
    string name;
    int lvl;
}Skill;

typedef struct Deco{
    string name;
    Skill skl;
    int size;
}Deco;

typedef struct Charm{
    string name;
    Skill skl;
}

#endif