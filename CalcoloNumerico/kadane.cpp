// risolve il problema dell'subarray contiguo con somma massima
#include <iostream>
#include <cmath>


struct answer {

   float max_sum;
   int st;
   int lt;

};
answer kadane(int array[], int l) {

    float max_sum = -INFINITY;
    float curr_sum = -INFINITY;
    
    // primo elemento del sottoarray
    int st = 0;
    // ultimo elemento del sottoarray
    int lt = 0;

    for(int i = 0; i < l; i++) {
        // se la somma corrente più il nuovo elemento è maggiore del nuovo elemento da solo, continuo ad allungare la somma corrente
        if(curr_sum+array[i] > array[i]) {
            curr_sum +=array[i];
            lt++;
        }
        // altrimenti riparto dal nuovo elemento
        else {
            curr_sum = array[i];
            st = i;
            lt = i;
        }
        // se la nuova somma è maggiore, aggiorno
        if(max_sum < curr_sum) {
            max_sum = curr_sum;
        }

    }
    answer a = answer();
    a.max_sum = max_sum;
    a.lt = lt;
    a.st = st;
    return a;
}

int main() {

    int array[] = {1,-2,3,4,-7,4,1,-2,10};
    
    answer a = kadane(array, sizeof(array)/sizeof(int));
    std::cout << a.max_sum << " " <<a.st << " "<< a.lt ;
    return 0;
}
