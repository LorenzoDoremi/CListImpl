
#include <iostream>
using namespace std;

// calculates definite integrals of functions
double integralCalculator(double (*f)(double), int min, int max, double interactions) {
    
    double value = 0;
    // calculate the average X increment of each step (base)
    double inc = (max-min)/interactions;
    for(double i =  min; i <= max; i+= inc) {
        
        //  (*f)(i) = height of rectangle
        value += (*f)(i)*inc;
        cout << value;
        cout << "\n";
    }
   return value;
}