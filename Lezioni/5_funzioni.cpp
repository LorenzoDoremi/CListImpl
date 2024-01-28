#include <iostream>
void funzione()
{

    // fa qualcosa
}

int somma(int a, int b)
{

    return a + b;
}

int eleva(int base, int esponente)
{

    int b = base;
    for (int i = 1; i < esponente; i++)
    {
        b *= base;
    }
    return b;
}

int eseguiFunzione(int(f1)(int, int), int a, int b)
{

    int c = f1(a, b);

    return c;
}


int* ritornaArraySbagliato(int l)
{
    //L'array esiste solo all'interno di questa funzione. non potremo mai ritornarlo!
    int array[l];
    for (int i = 0; i < l; i++)
    {
        array[i] = i;
    }

    return array;
}

int* ritornaArrayGiusto(int l)
{
    // new implica che salviamo sull'heap (globalmente) questo array. però dovremo anche cancellarlo noi!
    int *array = new int[l];
    for (int i = 0; i < l; i++)
    {
        array[i] = i;
    }

    return array;
}

int main()
{

    std::cout << eleva(10, 3) << std::endl;
    std::cout << eseguiFunzione(somma, 10, 3) << std::endl;

    // lambda
    // https://stackoverflow.com/questions/7627098/what-is-a-lambda-expression-in-c11

    std::cout << eseguiFunzione([](int x, int y) -> int
                                { return x * y; },
                                10, 3);



    // questa cosa non ha senso... C++ è un po' stupido
    /* int* array = ritornaArraySbagliato(10);
    for(int i = 0; i < 10; i++) {
       std::cout<< array[i] << std::endl;
     } */

    int *array = ritornaArrayGiusto(10);

    for (int i = 0; i < 10; i++)
    {
        std::cout << array[i] << std::endl;
    }
    for (int i = 0; i < 10; i++)
    {
        // notazione un po' strana. cosa significa?
        std::cout << *(array+i) << std::endl;
    }
 

    return 0;
}