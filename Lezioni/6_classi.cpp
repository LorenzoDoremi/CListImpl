#include <iostream>
#include <vector>
class Node 
{
     public:
     int public_value; 
     Node(int new_value) {
         m_value = new_value;
     }
     Node(int new_value, int pub) {
         public_value = pub;
     }
     int getValue() {
        return m_value;
     }
     void setValue(int i) {
        m_value = i;
     }
     // keyword PRIVATE
     private:
     int m_value;
     void funzionePrivata() {
        m_value = -1;
     }
     // keyword PROTECTED
     protected:
     void funzioneProtetta() {
        m_value = -2;
     }
     

     
};

 // come estendere una classe.
class WeightedNode: public Node {

     public:
      WeightedNode(int new_value, int new_weight) : Node(new_value) {
    
       m_weight = new_weight;
       // la funzione protetta può essere chiamata qua dentro
       funzioneProtetta();
       // la privata no
       // funzionePrivata();
     }
     private:
    
     int m_weight;

};


std::vector<int> ritornaVettore(int l ) {



   std::vector<int> a;
   a.push_back(l);
   a.push_back(l+10);

   return a;

}

Node ritornaNodo() {


   Node nodo = Node(555);
   return nodo;

}

// questa funzione è sbagliata. il nodo viene cancellato. Non posso far uscire un puntatore ad essa. 
int* ritornaValoreNodo() {

   // di nuovo manca il new!
   Node nodo = Node(10, 666);
  
   return &nodo.public_value;

}

Node* ritornaMemoriaNodo() {
   Node* x = new Node(10,999);
   return x;

}



int main() {


    Node nodo = Node(10);
    WeightedNode nodoPesato = WeightedNode(10,2);
    std::cout << nodoPesato.getValue() << "\n";

    // una classe molto utile : vector
    std::vector<int> vector = {1,2,3};


    
    vector.push_back(6);
    vector.emplace_back(5);
    
    // la differenza tra push ed emplace, è che push crea al momento una nuova istanza e poi la inserisce.
    // emplace crea una nuova istanza all'interno dello spazio. Sono sottigliezze che a noi non interessano particolarmente ora.

    vector.pop_back();
    vector.emplace ( vector.begin()+2, 200 );
    vector.emplace ( vector.end(), 500 );
    
   
   
   
    // un vettore può anche essere vuoto all'inizio ovviamente. 
    std::vector<int> empty_vector = {};
    empty_vector.emplace_back(15);
   

    // un vettore può anche essere ritornato. Molto più comodo degli array classici
    std::vector vettore = ritornaVettore(1);
    std::cout << "VETTORE =" << vettore.at(0) << std::endl;



    // scope delle classi. questo funziona
    Node mioNodo = ritornaNodo();
    std::cout << mioNodo.getValue() << std::endl;
 

    // questo è sbagliato!!!!!!!! i puntatori sono odiosi...
    int* k = ritornaValoreNodo();
    std::cout << k << std::endl;
    
    Node* mem = ritornaMemoriaNodo();
    Node xxx = *mem;
    std::cout << mem->public_value << std::endl;

    return 0;
}