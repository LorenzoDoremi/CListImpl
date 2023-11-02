#include <iostream>
#include "statistics.h"


int main() {

    float array[] = {656,3,3,34,567,9,45,34,6};
    int l = sizeof(array)/sizeof(int);


    doremistats::statistics stats = doremistats::describe(array,l,1,true);
    doremistats::print(stats);
    float moment5 = doremistats::moment(array,l,5,1,1);
   
    return 0;


}
