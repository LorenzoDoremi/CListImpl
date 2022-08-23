#include "../util.h"
#include <cmath>
#include <random>
#include <iostream>
// calcolo approssimato di pigreco tramite serie di taylor
double  Pi(int interactions) {
   
   
  double pi = 1;

 for(int i = 0; i < interactions; i++) {
     if(i%2==0) {

        pi -= 1.0/(3.0+2.0*i);
       
       
     }
     else {
       pi += 1.0/(3.0+2.0*i);
     }
 }

 return pi*4;

}


double monteCarloPi(float n) {

   float in = 0;
   float out = 0;
   for(int i = 0; i < n; i++) {

      auto x = rand() / (RAND_MAX + 1.);
      auto y = rand() / (RAND_MAX + 1.);
     
      if(sqrt(x*x + y*y) > 1) {
        out++;
      }
      else in++;

   }

   return in*4 / n;

}


int main() {
  srand(time(NULL));
  auto pi = monteCarloPi(100000);
  std::cout << pi << "\n";
  return 0;
}
