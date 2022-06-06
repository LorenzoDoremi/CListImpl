// input output
#include <iostream>

//
#include <time.h>

// util per riempire array di lunghezza arbitraria
void randFill(int array[], int length, int range)
{
    srand(time(NULL));
    for (int i = 0; i < length; i++)
    {
        array[i] = rand() % range;
    }
}
// util per stampare array di lunghezza arbitraria
void printArray(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
       std::cout << array[i] << std::endl;
    }
}

// util per scambiare elementi di un array
void swap(int& one, int& two) {

    int t = one;
    one = two;
    two = t;
    
}
// algoritmo di ordinamento selection sort
int* selectionSort(int array[], int length)
{

    for (int i = 0; i < length; i++)
    {
        for (int j = i; j < length; j++)
        {
            if (array[j] < array[i])
            {
                // se il nuovo valore è minore, allo faccio swap
              /*   int temp = array[i];
                array[i] = array[j];
                array[j] = temp; */
                swap(array[i], array[j]);
            }
        }
    }
    return array;
}

int* bubbleSort(int array[], int length) {

    for(int i = 0; i < length; i++) {
        for (int j = 0; j<length-1; j++) {

            if(array[j+1] < array[j]) {
                swap(array[j], array[j+1]);
            }

          
        }
    }
    return array;

}