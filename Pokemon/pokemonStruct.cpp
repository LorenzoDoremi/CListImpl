#include <iostream>

struct Type
{

    std::string name;
    float phys = 1;
    float fire = 1;
    float water = 1;
    float dark = 1;
    float light = 1;
};
struct Attack
{

    std::string attackname;
    short damage;
    Type type;
};
struct PokemonS
{

    std::string name;
    short hp;
    short def;
    PokemonS *evolution;
    Type type;
    Attack attackList[2];
    Attack* attacks = attackList;
    
    void evolve()
    {
        name = evolution->name;
        hp = evolution->hp;
        def = evolution->def;
        type = evolution->type;
        attacks = evolution->attackList;
      
    }
    void learnAttacks(Attack* newattacks) {

        for(short i = 0; i < 2; i++) {
            attacks[i] = newattacks[i];
        }

    }
};

// vari attacchi 
Attack 
electroshock = {.attackname = "electroshock", .damage = 20}, 
codata = {.attackname = "codata", .damage = 10},
electroBlast = {.attackname = "electroBlast", .damage = 40},
scappa = {.attackname = "electroBlast", .damage = 0};

// vari tipi 
Type
fisico = { .phys = 2, .dark = 0.5},
fuoco = { .fire = 2, .water = 0.5},
acqua = {  .fire = 0.5, .water = 2},
buio = {  .phys = 0.5, .dark = 2},
elettrico = {  .dark = 0.5, .light = 2};



// lista attacchi di pikachu
Attack pikachuAttacks[] = {electroshock, codata};
Attack raychuAttacks[] = {electroBlast, codata};



// versione struct 
PokemonS Raychu = {
    .name = "Raychu",
    .hp = 60,
    .def = 15,
    .type = {.name = "Electro"},
    .attackList = {electroBlast, scappa}

};



PokemonS Pikachu = {
    .name = "Pikachu",
    .hp = 30,
    .def = 10,
    .evolution = &Raychu,
    .type = {.name = "Electro"},
    .attackList = {electroshock, codata}



};


