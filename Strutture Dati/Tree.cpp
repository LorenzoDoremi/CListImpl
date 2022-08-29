#include <iostream>
// una versione del Binary Search Tree più elegante. (ogni nodo è un sottoalbero)
class BST {
  
  private:
  BST* left = nullptr; 
  BST* right = nullptr;
  int value = NULL;


  public: 
  BST() {

  }
  BST(int v) {
      value = v;
  }
  ~BST() {
     std::cout<< "nodo cancellato"+std::to_string(value) << "\n";
   }
  int getValue() {
    return value;
  }
  void insert(int v) {
      
      if(value) {
      if(v >= value) {
        if(right) {
            right->insert(v);
        }
        else right = new BST(v);
      }
      else {
        if(left) {
            left->insert(v);
        }
        else {
            left = new BST(v);
        }
      }
  } else  {
  
    value = v;
  }
  }

  void inOrder() {
     if(left) {
       
        left->inOrder();
       
     }
     std::cout << value << std::endl;
     if(right) {
        
        right->inOrder();
     }
  }
};



int main() {

    BST x = BST();
    x.insert(10);
    x.insert(23);
    x.insert(3);
    x.insert(12);
    x.insert(8);
    x.inOrder();

   
    return 0;
}