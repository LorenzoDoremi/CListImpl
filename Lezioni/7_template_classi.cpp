#include <iostream>



class Key
{
    public:
    Key() {};
    Key(int k) {
      m_key = k*10 % 255;
    };
    int m_key;
    
};

template <class T>
class Node 
{
     public:
     T m_value;
     Node(T new_value) {
         m_value = new_value;
     }
     
};

int main()
{
 
     
    
            
     
     Node<int> int_node = Node(10);
     Node<std::string> string_node = Node(std::string("ciao!"));
     Node<Key> d = Node(Key(100));


     std::cout <<  d.m_value.m_key << std::endl;
}