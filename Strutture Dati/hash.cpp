#include <iostream>
#include <vector>


// questa è una implementazione banale di una hashtable con template. 
template <typename t>
class Hash
{

public:
    Hash(int size) : m_size(size)
    {

        hash_table = std::vector<t>(size);
    }
    void hashInsert(t el)
    {

        int index = el * el % m_size;

        hash_table.emplace(hash_table.begin() + index, el);
    }
    std::vector<t> getTable()
    {
        return hash_table;
    }

protected:
    std::vector<t> hash_table;
    int m_size;
};

int main()
{

    Hash<char> letterHash = Hash<char>(17);
    Hash<int> intHash = Hash<int>(17);

    letterHash.hashInsert('a');
    letterHash.hashInsert('b');
    letterHash.hashInsert('c');

    intHash.hashInsert(100);
    intHash.hashInsert(12356);
    intHash.hashInsert(8127);
    std::vector<int> t = intHash.getTable();
    for (int el : t)
    {
        std::cout << el << "\n";
    }

    return 0;
}