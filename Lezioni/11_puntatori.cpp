#include <iostream>

// passo un numero per riferimento (tecnicamente, il valore esatto in memoria, non una copia)
double k(double &a) {
 

  a = 20;

  return a;
}

// passo il puntatore e modifico cosa c'è dentro
void pedit(double* puntatore) {

  *puntatore = 1000;
}

// passo il puntatore al puntatore (posso modificarlo)
void editPointer(int **pointer)
{

  // *pointer = il puntatore, non il valore
  **pointer = 50;
}
// passo la referenza al puntatore (posso modificare ciò a cui punta)
void editPointerReference(int *&pointer)
{

 
  *pointer = 100;
}






int main() {

  double a = 15;
  double newr = 500;
  // puntatore che punta ad a
  double* p = &a;
  k(*p);
  // mi aspetto 20
  std::cout << *p << std::endl;
  pedit(p);
  pedit(&a);
  // mi aspetto 1000
  std::cout << *p << std::endl;

  
  return 0;
}