#include <iostream>
#include "pokemonStruct.cpp"
#include <vector>
namespace Pkms
{
    class Pokemon
    {
    private:
        std::string name; // Attribute (string variable)
        short hp;
        short dmg;
        short def;
        Type tipo;
       
        std::vector<Attack> attackList; // meglio!
        Pokemon *evolution;
        bool hasEvolution;
        
    public:
        std::string getName()
        {
            return name;
        }
        bool getHasEvolution()
        {
            return hasEvolution;
        }
        std::vector<Attack> getAttacks()
        {

            return attackList;
        }

        void evolve()
        {
            if (hasEvolution)
            {
                hp = evolution->hp;
                def = evolution->def;
                name = evolution->name;
                attackList = evolution->attackList;
                hasEvolution = evolution->hasEvolution;

                //
                evolution = evolution->evolution;
            }
        }
        void learnAttack(Attack newAttack) {

             attackList.push_back(newAttack);
        }

        // pokemon in grado di evolversi
        Pokemon(std::string newName, short newHp, short newDmg, short newDef, Type newTipo, std::vector<Attack> newAttacks, Pokemon *newEvolution)
        {

            name = newName;
            hp = newHp;
            dmg = newDmg;
            def = newDef;
            tipo = newTipo;
            attackList = newAttacks;
            evolution = newEvolution;
            hasEvolution = true;
        }
        // pokemon non in grado di evolversi
        Pokemon(std::string newName, short newHp, short newDmg, short newDef, Type newTipo, std::vector<Attack> newAttacks)
        {

            name = newName;
            hp = newHp;
            dmg = newDmg;
            def = newDef;
            tipo = newTipo;
            attackList = newAttacks;
            hasEvolution = false;
        }
    };

    class LegendaryPokemon : public Pokemon
    {

    private:
        int value;

    public:
        LegendaryPokemon(std::string newName, short newHp, short newDmg, short newDef, Type newTipo, std::vector<Attack> newAttacks, int newValue)
            : Pokemon(newName, newHp, newDmg, newDef, newTipo, newAttacks)
        {
            value = newValue;
        }
    };

};