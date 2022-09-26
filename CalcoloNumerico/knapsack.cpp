#include <iostream>
#include <vector>

// questo algoritmo risolve il knapsack problem utilizzando programmazione dinamica e un albero di decisione.
// è un po' complesso da capire ma molto utile per la risoluzione di problemi avanzati.
// (a me ci sono volute 2 ore, conoscendo già la tecnica!!)

struct item
{
    std::string name;
    float weight;
    float value;
};

void sortValue(item items[], int length)
{

    for (int i = 0; i < length - 1; i++)
    {
        for (int j = i + 1; j < length; j++)
        {

            if (items[i].value / items[i].weight < items[j].value / items[j].weight)
            {
                item t = items[i];
                items[i] = items[j];
                items[j] = t;
            }
        }
    }
}
// items = lista di oggetti da valutare
// solution = dove salvare l'insieme di oggetti
// curr_solution = un vettore che contiene la miglior soluzione per ora
// length = lunghezza dell'array
// curr_index = attuale indice nell'array per la scelta successiva
// curr_gain = attuale guadagno dal ramo scelto
// curr_weight = attuale peso totale del ramo scelto
// maxw = peso massimo sopportato
// &maxgain = indice globale del massimo guadagno trovato fin'ora (server ad aggiornare se si trova un ramo migliore)
void knapsack(item items[], std::vector<item> &solution, std::vector<item> curr_solution, int length, int curr_index, int curr_gain, int curr_weight, int maxw, int &maxgain)
{

    // aumento il peso corrente con l'oggetto
    int new_weight = curr_weight + items[curr_index].weight;
    // aggiungo il nuovo valore
    int new_gain = curr_gain + items[curr_index].value;

    // se la nuova configurazione di oggetti è accettabile (entro i limiti di peso), continuo la lista.
    if (new_weight <= maxw)
    {
        // se ho trovato una nuova combinazione interessante, allora modifico.
        if (maxgain < new_gain || (maxgain == new_gain && new_weight < curr_weight))
        {
            maxgain = new_gain;
            solution = curr_solution;
            // lo aggiungo, perchè nel caso fosse l'ultima chiamata ricorsiva, non potrei aggiungerlo sotto.
            solution.emplace_back(items[curr_index]);
        }
    }
    // se il nuovo oggetto aggiunto sta nello zaino,allora continuo con entrambi i rami
    if (new_weight <= maxw && curr_index < length - 1)
    {

        // non lo aggiungo: ramo "0"
        knapsack(items, solution, curr_solution, length, curr_index + 1, curr_gain, curr_weight, maxw, maxgain);
        // aggiungo l'oggetto: ramo "1"
        curr_solution.emplace_back(items[curr_index]);
        knapsack(items, solution, curr_solution, length, curr_index + 1, new_gain, new_weight, maxw, maxgain);
    }
    // altrimenti non aggiungo l'oggetto e considero solo il ramo vuoto
    else if (curr_weight <= maxw && curr_index < length - 1)
    {
        // non lo aggiungo: ramo "0"
        knapsack(items, solution, curr_solution, length, curr_index + 1, curr_gain, curr_weight, maxw, maxgain);
    }
}

int main()
{

    item a = {.name = "a", .weight = 50, .value = 40};
    item a1 = {.name = "a1", .weight = 10, .value = 20};
    item a2 = {.name = "a2", .weight = 80, .value = 80};
    item a3 = {.name = "a3", .weight = 5, .value = 48};
    item a4 = {.name = "a4", .weight = 20, .value = 30};
    item a5 = {.name = "a5", .weight = 10, .value = 50};
    item a6 = {.name = "a6", .weight = 150, .value = 220};

    item items[] = {a, a2, a6, a, a1, a2, a3, a5, a4};

    int size = sizeof(items) / sizeof(items[0]);
    sortValue(items, size);

    int maxw = 120;
    int tot_w = 0;
    int maxgain = 0;
    std::vector<item> solution = std::vector<item>();

    knapsack(items, solution, std::vector<item>(), size, 0, 0, 0, maxw, maxgain);

    std::cout << maxgain << '\n';
    std::cout << solution.size() << '\n';
    for (item i : solution)
    {
        std::cout << i.name << " --- ";
    }

    return 0;
}