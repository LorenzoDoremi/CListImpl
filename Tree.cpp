 #include <iostream>
using namespace std;

// node class for Binary Search Trees
class Node {

public:
    Node* left;
    Node* right;
    int value;
    Node(int v) {
       value = v;
       left = NULL;
       right = NULL;
    }
    Node() {

    }

};
// Binary Search Tree
 class Tree {
  
   public:
   Node* head;
   int size = 0;
   void insert(int value) {

       insertNode(head, value);
   }
 
   void insertNode(Node*& start, int value) {

       // se il nodo esiste già, guardo i figli
       if(start) {
           
         
           
           // figlio dx
           if(value > start->value) {
          cout << "right" << endl;
             insertNode(start->right, value); 
           } 
           // figlio sx
           else {
               cout << "left" << endl;
             insertNode(start->left, value); 
           }

       }
       else { 
       // creo un nuovo nodo. 
     
       start = new Node(value) ;
      
       size++;
       // qua funziona. (?)
    
     
      

       }
   
   }

  void print(Node* curr) {
      
      Node x = *curr;
      cout << x.value << endl; 
      if(x.left) {
          print(x.left);
      }
      if(x.right) {
          print(x.right);
      }


  }



   


};
