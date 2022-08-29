// Your First C++ Program
#include <cmath>

// calcolo integrale
#include "Calcolo Numerico/integralCalculator.cpp"
#include "Calcolo Numerico/equationSolver.cpp"
// calcolo zeri funzione
#include "Calcolo Numerico/zeroFinder.cpp"
// classe albero binario
#include "Strutture Dati/Tree.cpp"
// algoritmi di ordinamento
#include "sorting.cpp"
// operazioni binarie
#include "Calcolo Numerico/binaryOperations.cpp"

// input output
#include <iostream>
using namespace std;
//
const int HEIGHT = 5;
const int WIDTH = 10;

int jimmy[HEIGHT][WIDTH];
int n = 10;

double square(double v)
{

  return v * v - 5;
}

double cube(double v)
{
  return v * v * v - 10;
}

// arrays are passed by reference
void arrayChange(int array[10])
{

  for (int i = 0; i < 10; i++)
  {
    array[i] = 7;
  }
}


void changePointer(int* p) {

  int a = 100;
  // perchè questo funziona?
  *p = a;
  // e questo no?
  p = &a;
}
int main()

{
  /*
   int a[] =  {0,0,0,0,0,0,1,1};
   int b[] =  {0,0,0,0,0,0,0,1};
    binaryAdd(a,b, 8); */

 
/*    solutions equation = solveEquation2(1,0,1);
   cout << equation.found;
   cout << equation.s1 << "  " << equation.s2 ;  */
 

  // TEST ORDINAMENTO
 /*     int l = 10;
   int array[l];
   randFill(array,l,100); 
   selectionSort(array, l); 
   int* n = bubbleSort(array,l);  */
   // printArray(array,l);  


   // array di zeri
  /*  int a[10] = {};
   printArray(a,10); */
 
    // TEST PUNTATORI
   /*  int p = 10;
    int* pointer = &p;
    // (by value, shouldn't change the actual pointer. but it changes if i called the other two functions before )
    
    cout << *pointer << endl;
    // (by value, shouldn't change the actual pointer. but it changes if i called the other two functions before )
    changePointer(pointer);

    cout << *pointer << endl; */

  // stampa 75 100 100

  

     // TEST CALCOLO INTEGRALE
     double b = integralCalculator(square, -5,5,100);
     double c = integralCalculatorT(square, -5,5, 100);
     double d = newtonRaphson(square, -5,5, 100);
     cout << "VALUE"+std::to_string(b) << endl;
     cout << "VALUE"+std::to_string(c) << endl;  
     cout << "VALUE"+std::to_string(d) << endl; 

  // TEST APPROSSIMAZIONE ZERI
  /*  double zero = recursiveZeroFinder(square, -100,100,1000);  */
  /*  zero = zeroFinder(square, -100,100, 100); */
  /*   double zero = regulaFalsi(square, -5.0, 0.0, 10);
    cout << zero << endl; */

 
  // TEST ALBERO DI RICERCA BINARIO
  /*  Tree tree = Tree();
  for (int i = 0; i < 10; i++)
  {
    int r = rand() % 1000;

    tree.insert(r);
  }

  tree.inOrder(tree.head);
  tree.clean(tree.head);

 */
  
  return 0;
}
