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