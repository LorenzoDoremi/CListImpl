#include <iostream>
#include "pokemonStruct.cpp"

class Pokemon
{
private:
    std::string name; // Attribute (string variable)
    short hp;
    short dmg;
    short def;
    Type tipo;
    Attack *attacks;
    Pokemon *evolution;
    bool hasEvolution;
    // The class
public: // Access specifier
    std::string getName()
    {
        return name;
    }
    bool getHasEvolution()
    {
        return hasEvolution;
    }
    Attack *getAttacks()
    {
        return attacks;
    }
    /*    Pokemon getEvolution()
       {

           if (hasEvolution)
           {
               return *evolution;
           }
           else
               return *this;
       } */
    void evolve()
    {
        if (hasEvolution)
        {
            hp = evolution->hp;
            def = evolution->def;
            name = evolution->name;
            attacks = evolution->attacks;
            hasEvolution = evolution->hasEvolution;

            //
            evolution = evolution->evolution;
        }
    }

    // pokemon in grado di evolversi
    Pokemon(std::string newName, short newHp, short newDmg, short newDef, Type newTipo, Attack *newAttacks, Pokemon *newEvolution)
    {

        name = newName;
        hp = newHp;
        dmg = newDmg;
        def = newDef;
        tipo = newTipo;
        attacks = newAttacks;
        evolution = newEvolution;
        hasEvolution = true;
    }
    // pokemon non in grado di evolversi
    Pokemon(std::string newName, short newHp, short newDmg, short newDef, Type newTipo, Attack *newAttacks)
    {

        name = newName;
        hp = newHp;
        dmg = newDmg;
        def = newDef;
        tipo = newTipo;
        attacks = newAttacks;
        hasEvolution = false;
    }
};

class LegendaryPokemon : public Pokemon
{

private:
    int value;

public:
    LegendaryPokemon(std::string newName, short newHp, short newDmg, short newDef, Type newTipo, Attack *newAttacks, int newValue) 
    : Pokemon(newName, newHp, newDmg, newDef, newTipo, newAttacks)
    {
        value = newValue;
    }
};