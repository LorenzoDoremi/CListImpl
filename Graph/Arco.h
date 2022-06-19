#include <string>


class Arco
{

    Nodo* a;
    Nodo* b;
    int cost;

public:
    Arco(Nodo* aa, Nodo* bb, int c) {
      a = aa;
      b = bb;
      cost = c;
    };

    std::string printArco() {

        
        std::cout << std::to_string(a->getValue()) + " ---> " + std::to_string(b->getValue()) << std::endl;
    }
    int getCost() {
        return cost;
    }
   
     Nodo* getA() {
        return a;

    }
    Nodo* getB() {
        return b;
    } 
};

