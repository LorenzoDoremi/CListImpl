
#include <iostream>
using namespace std;

// calculates bisection of a function
double zeroFinder(double (*f)(double), double a, double b, double interactions)
{

  

    double min = a;
    double max = b;
    double mid = (min + max) / 2;
    int interac = interactions;


    while((*f)(mid) != 0 && interac > 0 ) {

      // calcolo segno sx
      if((*f)(min) * (*f)(mid) < 0) {

         min = min;
         max = mid;
         mid = (min+mid)/2;
        

      }
      else {
         min = mid;
        max = max;
         mid = (min+max)/2;
        

      }

      interac--;
    }

    cout << interac;
    cout << " \n ------- \n";
  
    return mid;
}