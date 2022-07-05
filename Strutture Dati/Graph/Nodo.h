#include <vector>
#include <iostream>

class Arco;
class Nodo

{

    int value;

public:
    std::vector<Arco *> archiEntranti;
    std::vector<Arco *> archiUscenti;
    Nodo(int v)
    {
        value = v;
    }
    Nodo()
    {
    }
    int getValue()
    {
        return value;
    }
    void addArco(Arco *a, bool in)
    {

        if (in)
            archiEntranti.push_back(a);
        else
            archiUscenti.push_back(a);
    }
};