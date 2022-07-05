 #include <iostream>
using namespace std;

// Node class for Binary Search Trees
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
         
             insertNode(start->right, value); 
           } 
           // figlio sx
           else {
             
             insertNode(start->left, value); 
           }

       }
       else { 
       // assegno al puntatore corrente (inesistente) un puntatore ad un nodo. 
       
       start = new Node(value) ;
      
       size++;
    
    
     
      

       }
   
   }




  void inOrder(Node* curr) {
      
     
      
      if(curr->left) {
          inOrder(curr->left);
      }
      cout << curr->value << endl; 
      if(curr->right) {
          inOrder(curr->right);
      }
    

  }
  void clean(Node* curr) 
  {
      if(curr->left) {
          clean(curr->left);
      }
      if(curr->right) {
          clean(curr->right);
      }
      delete curr;


  }



   


};
