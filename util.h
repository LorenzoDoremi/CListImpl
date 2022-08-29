#include <time.h>
#include <random>


namespace doremi
{

    
    int random(int range)
    {
        
        return rand() % range;
    }
    double randomf()
    {
        srand(time(NULL));
        return rand() % 1;
    }

}