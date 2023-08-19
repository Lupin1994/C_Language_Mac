#include <stdio.h>
#include <stdlib.h>

#include <stdbool.h>
#include "List.h"


bool predicate_filter_more_5(int element){
    
    return element > 5;
    
}
bool predicate_filter_even_number(int element){

    return element % 2 == 0;
}
