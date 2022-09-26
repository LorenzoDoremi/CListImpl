#include <iostream>

// la ricorsione consiste in una funzione che richiama sè stessa.
// è molto potente e permette di risolvere molti problemi, ma è facile sbagliarsi
// definire il caso base (quando si ferma la ricorsione)

int fibonacci( int n) {



    if(n == 1) {
        return 0;
    } 
    else if(n == 2) {
        return 1;
    }
    else return fibonacci(n-1) + fibonacci(n-2);
}


bool binary_search(int array[], int init, int end, int target) {

    int m = (init+end)/2;
    // caso base = ho trovato il numero che cercavo!
    if(array[m] == target) {
        return true;
    }
    else if(init <= end) {

        if(target > array[m]) {
          return  binary_search(array, m+1, end, target);
        }
        else {
         return binary_search(array, init, m-1, target);
        }
    }
    return false;


}

// guardare il file Tree.cpp in Strutture dati per esempi più avanzti di ricorsione




int main() {


    for(int i = 1; i < 10; i ++) {
        std::cout << fibonacci(i) << " - ";
    }
    std::cout << '\n';


    // ricerca binaria
    int array[] = {0,1,3,4,5,6,7,8,9};
    int l = sizeof(array)/sizeof(array[0]);

    if( binary_search(array, 0, l, 4)) {
        std::cout << "trovato!";
    }
    else std::cout << "non trovato";
    return 0;
}