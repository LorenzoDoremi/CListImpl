// Your First C++ Program

#include <iostream>
#include "User.cpp"
#include "List.cpp"
#include "integralCalculator.cpp"
#include <cmath>
using namespace std;
const int HEIGHT = 5;
const int WIDTH = 10;

int jimmy[HEIGHT][WIDTH];
int n = 10;


double square(double v) {

  return v*v;
}


int main()

{





  double b = integralCalculator(square, 0,3,1000);
  double c = integralCalculator(sin, 0,3, 100);
  cout << "VALUE"+std::to_string(c);

//  cout << std::to_string(Lorenzo.getAge()) + "---" + Lorenzo.getName();
 
/*
 int interactions = 100000;
 string testo ="Nel cammin di nostra vita mi ritrovai per una selva oscura.";
 for(int i = 0; i < testo.length()-1; i++) {
   if(testo[i] == ' ' ) {
     testo[i+1] -= 32;
   }
 }
 cout << testo;

 int k = 45;
 int &c = k;
 int* ppointer = 0;
 pointer(&c);


 cout << ppointer;
 */
 return 0;
 
}


