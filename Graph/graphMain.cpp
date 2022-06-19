

#include "Graph.h"
#include <iostream>
int main()
{

    Grafo grafo = Grafo();

    for (int i = 0; i < 10; i++)
    {
        grafo.addNodo(rand() % 100);
    }

    grafo.createArchi();
    std::vector<Arco> archi = grafo.getArchi();
    std::vector<Nodo> nodi = grafo.getNodi();

     for(int i= 0; i < archi.size(); i++) {
        std::cout << archi[i].printArco() << std::endl;
    } 

    
    return 0;
}