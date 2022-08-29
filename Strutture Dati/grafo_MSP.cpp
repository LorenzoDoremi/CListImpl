// input output
#include <iostream>
#include <cmath>

void swapArray(int *a, int *b, int size)
{

    for (int i = 0; i < size; i++)
    {

        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
// questo metodo mette in ordine una matrice in base ad un valore chiave (peso degli archi)
void sortMatrix(int matrix[][3], int num_rows, int key_position)
{

    for (int i = 0; i < num_rows; i++)
    {
        for (int j = 0; j < num_rows; j++)
        {
            if (matrix[i][key_position] < matrix[j][key_position])
            {
                swapArray(matrix[i], matrix[j], 3);
            }
        }
    }
}
// questo metodo è estremamente complicato, e guardatelo solo se volete complicarvi la vita
void minium_spanning_tree(int nodes[], int edges[][3], int node_num, int edge_num)
{
    
    // faccio una copia degli archi, per non modificarli
    int temp_edges[edge_num][3];
    for(int i = 0; i < edge_num; i++) {
        for(int j = 0; j < 3; j++) {
            temp_edges[i][j] = edges[i][j];
        }
    }

    // faccio il sorting degli edge, in modo da considerare prima i più piccoli
    sortMatrix(temp_edges, 5, 2);
  
    int sets[node_num][3] = {};
    // creo dei "nodi-set" particolari, che contengono il nodo, il suo pivot e la dimensione del set  
    // sets[i][0] = nodo, sets[i][1] = pivot, sets[i][2] = dimensione set
    for (int i = 0; i < node_num; i++)
    {
        sets[i][0] = nodes[i];
        sets[i][1] = nodes[i];
        sets[i][2] = 1;

        
    }

  

    
    // per ciascun arco, cerco i nodi di cui è formato e i loro set. 
    for (int i = 0; i < edge_num; i++)
    {
       
        // salvo la tupla, perchè dovrò aumentarne la dimensione dopo (quando faccio un join)
        int *set1;
        int *set2;
        // Cerco i set a cui appartengono i due nodi di ciascun arco
        for (int j = 0; j < node_num; j++)
        {
            // ho trovato il primo set
            if (sets[j][0] == temp_edges[i][0])
            {
                set1 = sets[j];

                
            }
            // ho trovato il secondo set
            else if (sets[j][0] == temp_edges[i][1])
            {
                set2 = sets[j];
                
            }

               
        }
       
       
         if (set1[1] == set2[1])
        {
            // hanno lo stesso pivot, quindi sono nello stesso set.
            // questo edge non mi interessa (con pesi negativi, bisogna inventarsi altro!)
            temp_edges[i][2] = -1;
           
           
        }
        // sono diversi, quindi faccio un join
        else if (set1[2] >= set2[2])
            {
              
                // aumento la dimensione
                set1[2] += 1;
                set2[2] = set1[2];
                // cambio il pivot del set più piccolo
                set2[1] = set1[1];
            }
            else
            {
                
                // aumento la dimensione
                set2[2] += 1;
                set1[2] = set2[2];
                // cambio il pivot del set gipiù piccolo
                set1[1] = set2[1];
            }
        
        
    }


   
    // stampo gli archi
    for (int i = 0; i < 5; i++)
    {

        if (temp_edges[i][2] >= 0 )
        {
            std::cout << temp_edges[i][0] << " --> " << temp_edges[i][1] << "  peso = " << temp_edges[i][2] << std::endl;
        }
    }
}

int main()
{

    int nodes[] = {1, 4, 3, 2};
    int node_l = sizeof(nodes) / sizeof(int);
    // 0 = primo nodo , 1 = secondo nodo , 2 = peso dell'arco
    int edges[][3] = {{1, 2, 1}, {2, 3, 2}, {1, 4, 8}, {3, 4, 2}, {1, 3, 0}};

    minium_spanning_tree(nodes, edges, node_l, 5);



    return 0;
}