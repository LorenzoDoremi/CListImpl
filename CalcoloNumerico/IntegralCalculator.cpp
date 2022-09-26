#include <iostream>
#include <cmath>
// calcola l'approssimazione dell'integrale definito di f tramite metodo dei rettangoli
double integralCalculator(double (*f)(double), int min, int max, double interactions) {
    
    double value = 0;
    //inc = incremento ad ogni step (base del rettangolo presa in considerazione)
    double inc = (max-min)/interactions;
    for(double i =  min; i <= max; i+= inc) {
        
        //  (*f)(i) = altezza del rettangolo i-esimo
        value += (*f)(i)*inc;
       
    }
   return value;
}

// calcola l'approssimazione dell'integrale definito di f tramite metodo dei trapezi
double integralCalculatorT(double (*f)(double), int min, int max, double interactions) {
    
    double value = 0;
    // inc = incremento ad ogni step (base del rettangolo presa in considerazione)
    double inc = (max-min)/interactions;
    for(double i =  min; i <= max; i+= inc) {
        
        //  Base maggiore + base minore per altezza / 2
        value += (((*f)(i)+(*f)(i+inc))*inc)/2;
      
    }
   return value;
}

