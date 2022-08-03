// input output
#include <iostream>
#include <cmath>


void swapArray(int* a, int*b, int size) {

    for(int i = 0; i < size; i++) {

        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;

    }
}

void sortMatrix( int matrix[][3], int num_rows, int key_position) {

  for(int i = 0; i < num_rows; i++) {
        for(int j = 0; j < num_rows; j++) {
            if(matrix[i][key_position]< matrix[j][key_position]) {
                swapArray(matrix[i], matrix[j], 3);
            }
        }
    }
    

}


int main() {

    int nodes[] = {1,4,3,2};
    int node_l = sizeof(nodes)/sizeof(int);
    // 0 = primo nodo , 1 = secondo nodo , 2 = peso dell'arco
    int edges[][3] = {{1,2,1}, {2,3,2}, {1,4,8}, {3,4,2}, {1,3,0}};
    


    sortMatrix(edges, 5,2);
    int sets[node_l][3]  = {};
    
    // creo i "nodi-set"  0 = nodo, 1 = pivot, 2 = dimensione set
    for(int i = 0; i < sizeof(nodes)/sizeof(int); i++ ) {
        sets[i][0]  = nodes[i];
        sets[i][1]  = nodes[i];
        sets[i][2]  = 1;
    }
    // stampo i set per comodità
    for(int* set : sets) {
        std::cout << std::to_string(set[0]) +" "+ std::to_string(set[1])+" "+std::to_string(set[2])<< std::endl;

    }


    // questa funzione crea i set corretti
    for(int* edge: edges) {
        // cerco il primo nodo
        int* set1;
        int* set2;
        for(int i = 0; i < node_l; i++) {
             // ho trovato il primo set
             if(sets[i][0] == edge[0]) {
                set1 = sets[i];
             }
             // ho trovato il secondo set
             else if(sets[i][0] == edge[1]) {
                set2 = sets[i];
             }
        }
       
        if(set1[1] == set2[1]) {
            // hanno lo stesso pivot, quindi sono nello stesso set.
            // questo edge non mi interessa
            edge[2] = -1;
            continue;
        }
        else {
            if(set1[2] >= set2[2]) {
                
                // aumento la dimensione
                set1[2]+=1;
                set2[2] = set1[2];
                // cambio il pivot del più piccolo
                set2[1] = set1[1];


            }
            else {
                // aumento la dimensione
                set2[2]+=1;
                set1[2] = set2[2];
                // cambio il pivot del più piccolo
                set1[1] = set2[1];

            }

        }
    }
    
     std::cout << "ARCHI DEL MINIMUM SPANNING TREE" << std::endl;
    // stampo gli archi
    for(int i = 0; i < 5; i++) {
      
       if(edges[i][2] >= 0) {
        std::cout << edges[i][0] << " --> " << edges[i][1] << "  peso = " << edges[i][2] << std::endl;
       }
    }

    


    return 0;
}