// Your First C++ Program

#include <iostream>
#include "User.cpp"

using namespace std;
const int HEIGHT = 5;
const int WIDTH = 10;

int jimmy[HEIGHT][WIDTH];
int n = 10;


string food = "Pizza";  // food variable
int &meal = n;    // reference to food




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

void pointer(int* p) {

  *p = 10;
  
}
int main()

{

  User Lorenzo;
  Lorenzo.setAge(5);
  Lorenzo.setName("Lorenzo");
 
//  cout << std::to_string(Lorenzo.getAge()) + "---" + Lorenzo.getName();
 

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
 return 0;
 
}


