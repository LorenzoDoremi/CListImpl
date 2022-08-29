
#include <memory>
#include <iostream>

class V {
  
  public: 
   V(int x) {
      val = x;
   }
  ~V() {
     std::cout<< "V cancellato"+std::to_string(val) << "\n";
   }
  
   int val;

};

class Nodo {
   
   public:
   Nodo(int n) {

   

   }
   // questo metodo ritorna un puntatore smart che si auto cancellerà una volta che il nodo è distrutto. 
   std::unique_ptr<V> ritornaPuntatoreSmart() {
        
        auto oggetto = std::make_unique<V>(50);
        return oggetto;
   }
   // questo se non lo cancelli a mano fa casino con la memoria!
   V* ritornaPuntatore() {
       return new V(10);
   }
   ~Nodo() {
     std::cout<< "nodo cancellato" << "\n";
   }

   private:
  
};


int main() {

    
    Nodo a = Nodo(10);
    std::unique_ptr<V> valore;
    V* valore_brutto;
    // creiamo un ciclo giusto per cambiare scope
    if(true) {
     valore = a.ritornaPuntatoreSmart();
     valore_brutto = a.ritornaPuntatore();
    }
    std::cout << valore->val << "\n";
    std::cout << valore_brutto->val << "\n";
    std::cout << "fine!" << "\n";

    
    return 0;
}