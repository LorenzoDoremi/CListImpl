#include <iostream>
int main() {

    // tipi di numeri 

    short numero_piccolo = 10;
    std::cout << numero_piccolo << std::endl;

    unsigned short numero_piccolo_positivo = 20;
    std::cout << numero_piccolo_positivo << std::endl;

    unsigned short numero_piccolo_positivo2 = -20;
    std::cout << numero_piccolo_positivo2 << std::endl; // cosa stampa?

    short numero_grande = 1E+5;
    std::cout << numero_grande << std::endl; // cosa stampa?



    int numero_grande2 = 1E+5;
    std::cout << numero_grande2 << std::endl; // cosa stampa?


    // tipi di carattere

    char carattere = 2;
    char lettera = 'a';
    std::cout << carattere << std::endl; // cosa stampa?
    std::cout << lettera << std::endl; // cosa stampa?


    // più caratteri?

    std::string parola = "programmatore";
    std::cout << parola << std::endl; // cosa stampa?

    // se voglio solo alcune lettere?
    lettera = parola[3];
    std::cout << lettera << std::endl; // cosa stampa?


    
    return 0;
}