#include <cmath>
#include <iostream>
using namespace std;

struct solutions {
    float s1, s2;
    bool found;
} ;

// risolutore equazioni di secondo grado
solutions solveEquation2(float a, float b, float c) {


     solutions s;
     int delta = (b*b - 4*a*c);
   
     if(delta < 0 ) {
         
        s.found = false; 
     } 
     else {
        s.s1 = (-b + sqrt(delta))/(2*a);
        s.s2 = (-b - sqrt(delta))/(2*a);
        s.found = true;
        return s; 
     }

}