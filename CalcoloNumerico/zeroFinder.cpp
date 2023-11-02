
#include <iostream>
#include <cmath>
// calcolo iterativo per l'approssimazione zero di una funzione tramite bisezione
double zeroFinder(double (f)(double), double a, double b, double interactions)
{

   double min = a;
   double max = b;
   double mid = (min + max) / 2;
   int interac = interactions;

   while ((f)(mid) != 0 && interac > 0)
   {

      // cerco se lo zero è a sinistra
      if ((f)(min) * (*f)(mid) < 0)
      {

         min = min;
         max = mid;
         mid = (min + mid) / 2;
      }
      // altrimenti a destra
      else
      {
         min = mid;
         max = max;
         mid = (min + max) / 2;
      }

      interac--;
   }

   return mid;
}

// calcolo ricorsivo per l'approssimazione zero di una funzione tramite bisezione
double recursiveZeroFinder(double (f)(double), double a, double b, double interactions)
{
   double min = a;
   double max = b;
   // punto medio
   double mid = (min + max) / 2;
   if ((f)(mid) == 0 || interactions == 0)
   {
      return mid;
   }
   // cerco un punto medio a sinistra di quello attuale
   else if ((f)(min) * (f)(mid) < 0)
   {

      return recursiveZeroFinder(f, min, mid, interactions - 1);
   }
   // altrimenti a destra
   else
      return recursiveZeroFinder(f, mid, max, interactions - 1);
}




// calcolo ricorsivo per l'approssimazione zero di una funzione tramite corde (regula Falsi)
double regulaFalsi(double (f)(double), double a, double b, double interactions) {

    
    double min = a;
   
    double max = b;
  
    // calcolo coefficiente angolare retta passante.  fabs vs abs (float absolute)
    double coeff = ((f)(max) - (f)(min))/((max-min)); 
    
    // cerco dove la retta incrocia l'asse X fabs(x) è il numero di passi in X che mi servono in avanti.
    double mid = min+fabs((f)(min)/coeff);
  
   
    if((f)(mid) == 0 || interactions == 0) {
       return mid;
    }
    // cerco corda a sinistra
    else if((f)(min)*(f)(mid) < 0) {
  
      return regulaFalsi(f,min,mid, interactions-1);
   }
   // altrimenti a destra
   else {
   //
    return regulaFalsi(f,mid,max, interactions-1);
   }


}


// quando non funziona? quale problema potrebbe scaturire? 
double newtonRaphson(double(f)(double), double min, double max, int iteractions)
{

    double xi = max;

    while ( iteractions > 0 )
    {
        double coeff = (f(xi) - f(xi - 0.1)) / (xi - (xi - 0.1));
        xi -= fabs(f(xi) / coeff);
       
     
        if(fabs(f(xi)) < 0.01) {

           
            return xi;
        }
        iteractions--;
    }

    return xi;
}