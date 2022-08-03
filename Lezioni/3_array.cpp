#include <iostream>
int array[] = {1,2,3,4,5};
int array2[5] = {1,2,3,4,5};
int array3[10] = {};
int* matrice[] = {array,array2,array3}; 

// non va. C++ non è molto furbo
// int matrice[][] = {array,array2,array3};
// int matrice_nuova[][5] = {array,array2};

// questa pare uguale a quella sopra, ma C++ non è molto furbo :)
int matrice_corretta[][3] = {{1,2,3},{4,5,6}};
int matrice_corretta2[2][3] = {{1,2,3}, {4,5,6}};

// quando C++ crea una variabile, deve sapere quanta memoria andrà ad occupare.
// quando crea un array, tiene nella nostra variabile solo un PUNTATORE alla lista. questo punta alla lista, ma non sa quanto è lunga.
// scriviamo [][3], perchè C++ capisce per definizione al momento della creazione quanto sarà lungo l'array, ma non indaga sui sottoarray.  
// [2][3] è in realtà "inutile", perchè C++ sa che è un 2


int main() {


    std::cout << array3[0] << std::endl;
    return 0;
}
