#include <iostream>
void funzione() {


    // fa qualcosa
}

int somma(int a, int b) {

    return a+b;
}

int eleva(int base, int esponente) {

    int b = base;
    for(int i = 1; i < esponente; i++) {
        b *=base;
    }
    return b;

}

int eseguiFunzione( int (f1)(int,int), int a, int b ) {

    int c = f1(a,b);


    return c;
}


int main() {


    std::cout << eleva(10,3) << std::endl;
    std::cout << eseguiFunzione(somma,10,3) << std::endl;

    // lambda 
    // https://stackoverflow.com/questions/7627098/what-is-a-lambda-expression-in-c11

    std::cout << eseguiFunzione( [](int x, int y) -> int {return x * y;}, 10,3);

    
    return 0;
}