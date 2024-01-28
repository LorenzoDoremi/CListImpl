#include <iostream>
#include <vector>



template <typename t>
class Hash
{

public:
    Hash(int size) : m_size(size)
    {
        // a vector of vectors.
        hash_table = std::vector<std::vector<t>>(size);
        for(int i = 0; i < size; i++) {
            hash_table[i] = std::vector<t>();
        }

    }
    void hashInsert(t el)
    {
        
        int index = (el * el) % m_size;
       
        hash_table[index].emplace_back(el);
    }
    std::vector<std::vector<t>> getTable(){

        return hash_table;
    }
    void hashPrint() {
        for(int i = 0; i < hash_table.size(); i++) {
            for(int j = 0; j < hash_table[i].size(); j++) { 
            std::cout << hash_table[i][j] << " - ";
        }
        std::cout << std::endl;
    }

    }

protected:
    std::vector<std::vector<t>> hash_table;
    int m_size;
};

int main()
{

    Hash<char> letterHash = Hash<char>(71);
    Hash<int> intHash = Hash<int>(17);

    letterHash.hashInsert('a');
    letterHash.hashInsert('b');
    letterHash.hashInsert('c');
    
    int m = 31; 
    for(int i = 0; i < 100; i++) {
        letterHash.hashInsert(i*i*i % m);
       
    }
   
    letterHash.hashPrint();
   

    return 0;
}