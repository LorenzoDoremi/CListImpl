#include <iostream>
#include <cmath>
int factorial(int i) {

   if(i <= 1) {
      return 1;
   }
   else return i*factorial(i-1);

}

float sin(float a, int iterations) {
     
    float r = 0;
    for(int i = 0; i < iterations; i++ ) {
        r += ((pow(-1, i))/factorial(2*i + 1))*(pow(a,2*i + 1));
       
    }
    return r;
}
float cos(float a, int iterations) {
     
    float r = 0;
    for(int i = 0; i < iterations; i++ ) {
         r += ((pow(-1, i))/factorial(2*i))*(pow(a,2*i));
    }
    return r;
}



int main() {
    
    std::cout << sin(0*(M_PI/180), 10);
    std::cout << cos(0*(M_PI/180), 10);
    return 0;
}