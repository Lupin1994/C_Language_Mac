#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include "List.h"


bool choose_predicate(int choose_number, int element){
    switch (choose_number)
    {
        case 1:
            return predicate_filter_more_5(element);
        case 2:
            return predicate_filter_even_number(element);
    }
}
bool predicate_filter_more_5(int element){
    bool result;
    result = element > 5 ? true : false;
    return result;
}
bool predicate_filter_even_number(int element){
    bool result;
    result = element % 2 == 0 ? true : false;
    return result;
}
