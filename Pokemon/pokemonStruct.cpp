#include <iostream>
#include <vector>
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


// vari attacchi 
Attack 
electroshock = {.attackname = "electroshock", .damage = 20}, 
codata = {.attackname = "codata", .damage = 10},
electroBlast = {.attackname = "electroBlast", .damage = 40},
scappa = {.attackname = "scappa", .damage = 0};

// vari tipi 
Type
fisico = { .phys = 2, .dark = 0.5},
fuoco = { .fire = 2, .water = 0.5},
acqua = {  .fire = 0.5, .water = 2},
buio = {  .phys = 0.5, .dark = 2},
elettrico = {  .dark = 0.5, .light = 2};



// lista attacchi di pikachu
std::vector<Attack> pikachuAttacks = {electroshock, codata};
std::vector<Attack> raychuAttacks = {electroBlast, codata};


