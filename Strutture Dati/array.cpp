#include <iostream>


// questo codice ( metodi invert e rotate) permette di eseguire lo shifting e l'inversione di un array in tempo lineare.
// è basato su un trucco un po' complesso che vediamo assieme.

template<typename t>
void invert(t array[], int begin, int end) {

   int j = 1; 
   for(int i = begin; i<(begin+end)/2; i++) {
        

        t temp = array[i];
        array[i] = array[end-j];
        array[end-j] = temp;
        j++;
      
   }

}
template<typename t>
void rotate(t array[], int length, int k) {
    
    if(k < 0 ) {
        k = length+k;
    }
    invert(array, 0, length);
    invert(array, 0, k);
    invert(array, k, length);

}





int main() {

    

    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    rotate(array, 10, 3);

    std::cout << "\n";
    for(auto i : array) {
        std::cout << i << " ";
    }





    return 0;
}