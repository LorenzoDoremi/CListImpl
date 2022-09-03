#include <iostream>
int main() {

    int i = 5;
    int j = 12;
    
    float i2 = 5.0;
    float j2 = 12.0;
    int somma = i+j;
    int differenza = j-i;
    int prodotto = i*j;

    int divisione = i/j;
    float divisione2 = i/j;
    
    float divisione_float = i2/j2;


    std::cout << divisione << '\n';
    std::cout << divisione2 << '\n';
    // oh finalmente funziona!!
    std::cout << divisione_float << '\n';


    i++;
    i--;
    i *= 3; //  i = i*3
    i /= 3; // i = i/3
    i %= 3; // i = i%3 
    std::cout << i << '\n';


    // operatore condizionale if

    int numero = 100;
    short numero_piccolo = 1;
    if(numero < 50) {
        std::cout << "MOLTO GRANDEH!" << '\n';
    }
    if(numero > 50 || numero < 100) {
         std::cout << "Grande ma non troppoh" << '\n';
    }
    if(numero > 50 && numero_piccolo < 10) {
         std::cout << "sono molto distanti questi numeri!" << '\n';
    }

    // operatore condizionale switch
    switch (numero)
    {
    case 100:
        std::cout << "numero è uguale a 100";
        break;
    case 50:
        std::cout << "switch è uguale a 50";
        break;
    default:
        break;
    }


    return 0;
}



