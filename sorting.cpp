// input output
#include <iostream>
using namespace std;
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
        cout << array[i] << endl;
    }
}

// util per scambiare elementi di un array
void swap(int& one, int& two) {

    int t = one;
    one = two;
    two = t;
    
}
// algoritmo di ordinamento selection sort
void selectionSort(int array[], int length)
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
}