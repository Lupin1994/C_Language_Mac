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
bool predicate_search_equal_element(int search_element, int element_in_list){
    return search_element == element_in_list;
}