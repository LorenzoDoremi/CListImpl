#include <iostream>
#include <random>
#include <cmath>
#include <chrono>

// funzione che prende il tempo corrente.
long double curtime()
{
    return std::chrono::duration_cast<std::chrono::milliseconds>(
               std::chrono::system_clock::now().time_since_epoch())
        .count();
}
static const long int l = 100000000;
static int array[l] = {};

int media(int arr[], long long int l, int step)
{

    double s = 0;
    for (long long int i = 0; i < l; i += step)
    {
        s += arr[i];
    }
    return s / (l/step);
}

double accuratezza(auto atteso, auto reale) {

    return 100 -std::abs(reale-atteso)*100/atteso;
}

int main()
{

    for (int n = 0; n < 40; ++n)
    {
        /*  std::cout << distr(gen) << ' '; // generate numbers */
    }

    long long int seed = 1991203;
    double s = 0;

    for (int i = 1; i < l; i++)
    {
        double k = seed % 100;
        array[i] = k;
        seed = seed + i;
        // std::cout << k << " - ";
    }
    double t = curtime();
    double m = media(array, l, 1);
    long double t2 = curtime();
    std::cout << "tempo = " << t2 - t << std::endl;
    std::cout << "media = " << m;

    std::cout << "-------------------" << std::endl;
    t = curtime();
    double m2 = media(array, l, 100);
    t2 = curtime();
    std::cout << "tempo = " << t2 - t << std::endl;
    std::cout << "media = " << m2 << "std::endl";

    std::cout << "accuratezza = "<< accuratezza(m,m2) << "%";
    return 0;
}