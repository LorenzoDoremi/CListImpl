// Your First C++ Program

#include <iostream>
#include "User.cpp"
#include "List.cpp"
#include "integralCalculator.cpp"
#include <cmath>
#include "zeroFinder.cpp"
using namespace std;
const int HEIGHT = 5;
const int WIDTH = 10;

int jimmy[HEIGHT][WIDTH];
int n = 10;


double square(double v) {

  return v*v - 10;
}




void arrayChange(int array[10]) {

  for(int i = 0; i < 10; i++) {
    array[i] = 7;
  }
}
int main()

{




  /*
  double b = integralCalculator(square, 0,3,1000);
  double c = integralCalculator(sin, 0,3, 100);
  cout << "VALUE"+std::to_string(c);
  */


  double zero = recursiveZeroFinder(square, -100,100,1000);
  zero = zeroFinder(square, -100,100, 100);
  cout << zero;
 return 0;
 
}


