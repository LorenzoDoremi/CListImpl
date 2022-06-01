// Your First C++ Program
#include <cmath>
#include "User.cpp"
// calcolo integrale
#include "integralCalculator.cpp"
#include "equationSolver.cpp";
// calcolo zeri funzione
#include "zeroFinder.cpp"
// classe albero binario
#include "Tree.cpp"
// algoritmi di ordinamento
#include "sorting.cpp"
// operazioni binarie 
#include "binaryOperations.cpp"

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

  return v * v ;
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

void editPointer(int *pointer)
{

  int a = 20;
  int *p = &a; // new Node(20)

  *pointer = *p;
}

int main()

{ 
/* 
 int a[] =  {0,0,0,0,0,0,1,1};
 int b[] =  {0,0,0,0,0,0,0,1};
  binaryAdd(a,b, 8); */


solutions equation = solveEquation2(3,-20,-5);
cout << equation.s1 << "  " << equation.s2 ;


 /*  
   // TEST ORDINAMENTO
   int l = 10;
   int array[l];
   randFill(array,l,100);
   selectionSort(array, l);
   printArray(array,l);  */

  /* 
   // TEST PUNTATORI
   int p = 10;
   int* pointer = &p;
   cout << *pointer;
   editPointer(pointer);
    cout << *pointer;  */
 /* 

    // TEST CALCOLO INTEGRALE
    double b = integralCalculator(square, 0,3,1000);
    double c = integralCalculatorT(square, 0,3, 1000);
    cout << "VALUE"+std::to_string(b) << endl; 
    cout << "VALUE"+std::to_string(c);  */


  /*
  // TEST APPROSSIMAZIONE ZERI
  double zero = recursiveZeroFinder(square, -100,100,1000);
  zero = zeroFinder(square, -100,100, 100);
  zero = regulaFalsi(cube, -5,5, 1000);
  cout << zero << endl;
  */

  /* 
  // TEST ALBERO DI RICERCA BINARIO
  Tree tree = Tree();
  for (int i = 0; i < 10; i++)
  {
    int r = rand() % 1000;

    tree.insert(r);
  }

  tree.print(tree.head); */

  
  return 0;
}
