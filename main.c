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
// bool predicate_filter_more_5(int element){
//     bool result;
//     result = element > 5 ? true : false;
//     return result;
// }
// bool predicate_filter_even_number(int element){
//     bool result;
//     result = element % 2 == 0 ? true : false;
//     return result;
// }
int Choose_number(){
    printf("Choose your way of filtration: \n");
    printf(" 1-numbers more 5\t 2-only even numbers\n");
    printf("Write your number: ");
    int choose_number;
    scanf("%d",&choose_number);
    return choose_number;
}

int main()
{
    TList *list = list_create();
    int item, _count_element = 1;
    char _stop_char;
    do
    {
        printf("\nWrite element number - %d : ", _count_element);
        scanf("%d", &item);
        list_add(list, item);
        _count_element++;
        getchar();
        printf("Next (y/n)? ");
        _stop_char = getchar();
    } while (_stop_char == 'y');

    // printf("Choose your way of filtration: \n");
    // printf(" 1-numbers more 5\t 2-only even numbers\n");
    // printf("Write your number: ");
    // int choose_number;
    // scanf("%d",&choose_number);
    TList *list_output;
    switch (Choose_number())
    {
        case 1:
            creat_listoutput_with_filtering_elements(list, predicate_filter_more_5);
        case 2:
            creat_listoutput_with_filtering_elements(list, predicate_filter_even_number);
    }
    list_print(list_output);

    
    //TList *list_output = creat_listoutput_with_filtering_elements(list, choose_predicate);
    

    
}
