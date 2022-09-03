#include <iostream>
template <typename T>
T quadrato(T qualcosa) {
   
    return qualcosa*qualcosa;
    
}


int main() {


    float virgola = 5.60;
    virgola = quadrato(virgola);

    char lettera = 'a';
    lettera = quadrato(lettera);

    std::cout << lettera << '\n';
    std::cout << virgola << '\n';

    return 0;
}