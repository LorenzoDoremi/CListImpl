
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

      // search for zero on left side 
      if((*f)(min) * (*f)(mid) < 0) {

         min = min;
         max = mid;
         mid = (min+mid)/2;
        

      }
      // search for zero on right side
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


// calculates a zero of a function recursively through bisection
double recursiveZeroFinder(double (*f)(double), double a, double b, double interactions)
{ 
    double min = a;
    double max = b;
    double mid = (min + max) / 2;
   if((*f)(mid) == 0 || interactions == 0) {
      return mid;
   }
   else if((*f)(min)*(*f)(mid) < 0) {

      return recursiveZeroFinder(f,min,mid, interactions-1);
   }
   else  return recursiveZeroFinder(f,mid,max, interactions-1);
}

double regulaFalsi(double (*f)(double), double a, double b, double interactions) {


    double min = a;
   
    double max = b;
    // calcolo coefficiente angolare retta passante.
    double coeff = ((*f)(max) - (*f)(min))/((max-min)); 
  
    double mid = min+abs((*f)(min)/coeff);

    if((*f)(mid) == 0 || interactions == 0) {
       return mid;
    }
    else if((*f)(min)*(*f)(mid) < 0) {

      return regulaFalsi(f,min,mid, interactions-1);
   }
   else  return regulaFalsi(f,mid,max, interactions-1);


}