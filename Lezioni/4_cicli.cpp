#include <iostream>
int array[] = {1, 2, 3, 4, 5};
int array2[5] = {1, 2, 3, 4, 5};
int array3[10] = {};

int *matrice[] = {array, array2, array3};
int matrice_corretta[][3] = {{1, 2, 3}, {4, 5, 6}};

int main()
{
    // ciclo for
    for (int i = 0; i < 5; i++)
    {
        std::cout << array2[i] << " ";
    }
    std::cout << std::endl;
    int i = 0;

    // ciclo while
    while (i < 5)
    {
        std::cout << array2[i] << " ";
        i++;
    }
    std::cout << std::endl;

    // ciclo "super special"  (foreach)
    // ha un problemino
    for (int el : array3)
    {
        std::cout << el << " ";
    }

    std::cout << std::endl;

    
    // fix! con un contatore, so anche in che posizione sono arrivato!
    // ma c'è ancora un problema. el è "virtuale" (passato per valore)!
    int counter = 0;
    for (int el : array3)
    {
        std::cout << el << " ";
        el = 9;
        counter++;
    }
     for (int el : array3)
    {   
        // stampa sempre zero!   el = 9 non fa nulla. 
        std::cout << el << " ";
       
        
    }

    return 0;
}
