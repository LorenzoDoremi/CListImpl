#include <iostream>
// passo il puntatore al puntatore (posso modificarlo)
void editPointer(int **pointer)
{

  
  **pointer = 50;
}
// passo la referenza al puntatore (posso modificare ciò a cui punta)
void editPointerReference(int *&pointer)
{

 
  *pointer = 100;
}



// passo un numero per riferimento (tecnicamente, il valore esatto in memoria, non una copia)
double k(double &a) {
 

  a = 20;

  return a;
}


int main() {

  double a = 15;
  double* p = &a;
  std::cout << k(*p) << std::endl;
  std::cout << a;
  return 0;
}