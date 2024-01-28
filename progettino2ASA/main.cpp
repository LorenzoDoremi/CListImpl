#include <iostream>
#include <fstream>
#include <vector>
int main()
{

    std::ifstream myfile;
    myfile.open("messaggio.txt");
   
    // dove memorizzo
    std::vector<std::string> s;
    // memoria temporanea
    std::string temp;
    while (std::getline(myfile, temp))
    {
        s.emplace_back(temp);
       
    }
    // stampo un vettore
    int index = 0;
    while( index < s.size()) {
        std::cout << s.at(index) << std::endl;
        index++;
    }
    std::cout << std::endl;
    index = 0;
    
    while( index < s.size()) {
        std::cout << s.at(index) << std::endl;
        index++;
    }
    int chiudi;
    std::cout << "premi 1 per chiudere";
    std::cin >> chiudi;
    return 0;
}