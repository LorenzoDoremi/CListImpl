#include <vector>
#include "Nodo.h"
#include "Arco.h"

class Grafo
{

    std::vector<Arco*> archi;
    std::vector<Nodo*> nodi;

public:
    std::vector<Nodo*> getNodi() {
        return nodi;
    }
       std::vector<Arco*> getArchi() {
        return archi;
    }

    void addNodo(int v)
    {
        Nodo* x = new Nodo(v);
        nodi.push_back(x);
    }
    Grafo() {
        
    }
    // crea percorsi dal nodo minore al maggiore
    void createArchi() {

        for(int i = 0; i < nodi.size(); i++) {
           for(int j = 0; j < nodi.size(); j++) {
              

              
               if(nodi[i]->getValue() < nodi[j]->getValue()) {
                
                
                  archi.push_back( new Arco(nodi[i], nodi[j], nodi[i]->getValue() - nodi[j]->getValue()) );
                 /*  nodi[i].addArco(connector, false);
                  nodi[j].addArco(connector, true);  */
                  
               }
           }
        }
    }
};