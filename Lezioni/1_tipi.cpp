#include <iostream>
int main() {

    // tipi di numeri 

    short numero_piccolo = 10;
    std::cout << numero_piccolo << "\n";

    unsigned short numero_piccolo_positivo = 20;
    std::cout << numero_piccolo_positivo << "\n";

    unsigned short numero_piccolo_positivo2 = -20;
    std::cout << numero_piccolo_positivo2 << "\n"; // cosa stampa?

    short numero_grande = 1E+5;
    std::cout << numero_grande << "\n"; // cosa stampa?



    int numero_grande2 = 1E+5;
    std::cout << numero_grande2 << "\n"; // cosa stampa?


    // tipi di carattere

    char carattere = 2;
    char lettera = 'a';
    std::cout << carattere << "\n"; // cosa stampa?
    std::cout << lettera << "\n"; // cosa stampa?


    // più caratteri?

    std::string parola = "programmatore";
    std::cout << parola << "\n"; // cosa stampa?

    // se voglio solo alcune lettere?
    lettera = parola[3];
    std::cout << lettera << "\n"; // cosa stampa?



    const int PI_GRECO = 3.14157;
    
    // a cosa serve const? a proteggere il nostro codice da malintenzionati...ma non solo. performance!
    // PI_GRECO = 3;

    // auto = risparmiamo di dover dichiarare. a volte è meglio specificare...a volte no. (molti professionisti usano auto e cose simili che vedremo più avanti)
    auto valore = "ciao";
    auto altro_valore = 10;

    
    return 0;
}