// Your First C++ Program

#include "User.cpp"

#include "integralCalculator.cpp"
#include <cmath>
#include "zeroFinder.cpp"
#include "Tree.cpp"
#include "sorting.cpp"

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

  
   // TEST ORDINAMENTO
   int l = 10;
   int array[l];
   randFill(array,l,100);
   selectionSort(array, l);
   printArray(array,l); 

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
