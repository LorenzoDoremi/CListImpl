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


    std::cout << divisione << std::endl;
    std::cout << divisione2 << std::endl;
    // oh finalmente funziona!!
    std::cout << divisione_float << std::endl;


    i++;
    i--;
    i *= 3; //  i = i*3
    i /= 3; // i = i/3
    i %= 3; // i = i%3 
    std::cout << i << std::endl;
    return 0;
}



