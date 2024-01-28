#include <iostream>
using namespace std;

void swap(int array[], int size) {



     for(int i = 0; i < size/2; i++) {

         int temp = array[i];
         array[i] = array[size-i-1];
         array[size-i-1] = temp;
     }

}  



int main() {

    // riempio l'array
    int array[11];
    int size = sizeof(array)/sizeof(array[0]);
    for(int i = 0; i < size; i++) {
        array[i] = i;
       
    }
    
    // inverto l'array in place
    swap(array, size);

    for(int i = 0; i < 10;i++) {
        std::cout << array[i] << std::endl;
    }

    return 0;

}

