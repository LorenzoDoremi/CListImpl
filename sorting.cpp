// input output
#include <iostream>
#include <limits>
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
// algoritmo di ordinamento exchange  sort
int* exchangeSort(int array[], int length)
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

// algoritmo di ordinamento exchange sort (numeri interi positivi)
int* selectionSort(int array[], int length)
{

    for (int i = 0; i < length; i++)
    {
        int min = std::numeric_limits<float>::infinity();
        int index = i;
        for (int j = i; j < length; j++)
        {
            if (array[j] < min)
            {
                min = array[j];
                index = j;

                
            }
        }
        swap(array[i], array[index]);
    }
    return array;
}



// algoritmo countingSort, uno degli algoritmi di ordinamento per numeri non-general purpose più veloci che esistano
// implementazione per numeri positivi. 
int* countingSort(int array[], int length) {

    int max = 0;
    for(int i = 0; i < length; i++) {
        if( array[i] > max) {
            max = array[i];
        }
    }
    int counter[max+1] = {};
    for(int i = 0; i < length; i++) {
        counter[array[i]]++;
    }
   
    // insert 

    int index = 0; 
    for(int i = 0; i < max+1; i++) {
       // std::cout << counter[i] << "-";
       if(counter[i] > 0) {
        for(int j = 0; j < counter[i]; j++) {
            array[index] = i;
            index++;
        }
       }

    }

    return array;

}



int main() {

    
    int array[] = {3,7,34,7,3,12,199,0,2,0,1,2};
    selectionSort(array, sizeof(array)/sizeof(array[0]));
    // countingSort(array, sizeof(array)/sizeof(array[0]));

    for(int i : array) {
        std::cout << i << " - ";
    }

  



    return 0;
}