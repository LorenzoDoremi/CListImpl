// Your First C++ Program
#include <cmath>
// input output

/* #include "pokemonStruct.cpp" */
#include "PokemonClass.cpp"
// input output
#include <iostream>
int main()
{
    Pkms::Pokemon Raychu = Pkms::Pokemon("Raychu", 60, 20, 15, elettrico, raychuAttacks);
    Pkms::Pokemon myPokemon = Pkms::Pokemon("Pikachu", 30, 20, 10, elettrico,  pikachuAttacks, &Raychu);
    Pkms::LegendaryPokemon Arceus = Pkms::LegendaryPokemon("Arceus", 100, 50, 20, acqua, raychuAttacks, 15000);
   /*  Attack attacks[] = {electroshock, codata};
    myPokemon.learnAttacks(attacks); */
    std::cout << "ho scelto il pokemon " + myPokemon.getName() + "!" << std::endl;
 

    /* oops! */
    std::cout << "Vai " + myPokemon.getName()+"! attacca con "+(myPokemon.getAttacks()[0].attackname) << std::endl;
    
   
   // myPokemon = *myPokemon.getEvolution();
    myPokemon.evolve();
  
    myPokemon.learnAttack(scappa);
    
    
    std::cout << "Vai " + myPokemon.getName()+"! attacca con "+(myPokemon.getAttacks()[2].attackname) << std::endl;


    
    return 0;
};