
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