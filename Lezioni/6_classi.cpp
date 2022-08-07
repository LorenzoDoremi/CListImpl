#include <iostream>
#include <vector>
class Node 
{
     public:
    
     Node(int new_value) {
         m_value = new_value;
     }
     int getValue() {
        return m_value;
     }
     void setValue(int i) {
        m_value = i;
     }
     // keyword PRIVATE
     private:

     void funzionePrivata() {
        int m_value = -1;
     }
     // keyword PROTECTED
     protected:
     void funzioneProtetta() {
        int m_value = -2;
     }
     int m_value;

     
};


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




int main() {


    Node nodo = Node(10);
    WeightedNode nodoPesato = WeightedNode(10,2);
    std::cout << nodoPesato.getValue() << std::endl;

    // una classe molto utile : vector
    std::vector<int> vector = {1,2,3};
    vector.push_back(6);
    vector.pop_back();
    vector.emplace ( vector.begin()+2, 200 );
    vector.emplace ( vector.end(), 500 );
    for(int el:vector) {
        std::cout << el << " ";
    }
    
    return 0;
}