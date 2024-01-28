#include <iostream>

int array[] = {1,2,3,4,5};
int array2[5] = {10,20,30,40,50};
int array3[10] = {};


// non va. C++ non è molto furbo
// int matrice[][] = {array,array2,array3};
//int matrice_nuova[][5] = {array,array2};

int* matrice[] = {array,array2,array3}; 

char m[10] = {};


// questa pare uguale a quella sopra, ma C++ non è molto furbo :)
int matrice_corretta[][3] = {{1,2,3},{4,5,6}};
int matrice_corretta2[2][3] = {{1,2,3}, {4,5,6}};

// quando C++ crea una variabile, deve sapere quanta memoria andrà ad occupare.
// quando crea un array, tiene nella nostra variabile solo un PUNTATORE alla lista. questo punta alla lista, ma non sa quanto è lunga.
// scriviamo [][3], perchè C++ capisce per definizione al momento della creazione quanto sarà lungo l'array, ma non indaga sui sottoarray.  
// [2][3] è in realtà "inutile", perchè C++ sa che è un 2


int main() {

    int k = matrice[1][2];
    int* pointer = matrice[1];
    int max = -2147483647;
    
    std::cout << *(pointer+2)  << std::endl;
    std::cout << *(pointer+2)  << std::endl;

    for(int i = 0; i < 10; i++) {
        std::cout << m[i] << " - ";
    }

    std::string cognome = "Doremi";
    for(int i = 0; i < 10; i++) {
        std::cout << cognome[i]<<"-";
    }
    std::cout << max;
    return 0;
}
