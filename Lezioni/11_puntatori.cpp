#include <iostream>

// passo un numero per riferimento (tecnicamente, il valore esatto in memoria, non una copia)
double modifica_memoria(double &a) {
 

  a = 20;

  return a;
}

// passo il puntatore e modifico cosa c'è dentro
void pedit(double* puntatore) {

  *puntatore = 1000;
}

// passo il puntatore al puntatore (posso modificarlo)
void modifica_memoria_puntatore(double **pointer)
{

  // *pointer = il puntatore, non il valore
  **pointer = 50;
}
// passo la referenza al puntatore (posso modificare ciò a cui punta)
void modifica_puntatore(double *&pointer)
{

 
  *pointer = 420;
}






int main() {

  double a = 15;
  double newr = 500;
  // puntatore che punta ad a
  double* p = &a;

  // passo il riferimento in memoria a cui punta p (non il riferimento in memoria di p)
  modifica_memoria(*p);
  // fa la stessa cosa tecnicamente. ma passo un tipo diverso
  pedit(p);
  // mi aspetto 1000
  std::cout << *p << std::endl;
  // il puntatore non passa, ma ciò a cui punta va bene comunque 
  pedit(&a);
  // mi aspetto 1000
  std::cout << *p << std::endl;

  // passo l'indirizzo di memoria in cui è contenuto il puntatore che punta all'indirizzo di memoria di a
  // cambio il valore di a. 
  modifica_memoria_puntatore(&p);
  // mi aspetto 50.
  std::cout << a << std::endl;
  
  // mi aspetto ancora 50
  std::cout << *p << std::endl;

  
  modifica_puntatore(p);
  // mi aspetto 420
  std::cout << *p << std::endl;


  
  return 0;
}