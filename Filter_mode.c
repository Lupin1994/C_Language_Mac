#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include "List.h"


// bool choose_predicate(int choose_number, int element){
//     switch (choose_number)
//     {
//         case 1:
//             return predicate_filter_more_5(element);
//         case 2:
//             return predicate_filter_even_number(element);
//     }
// }
bool predicate_filter_more_5(int element){
    
    return element > 5;
    
}
bool predicate_filter_even_number(int element){

    return element % 2 == 0;
}
