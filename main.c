#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include "List.h"

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

    //
    // switch (choose_number)
    // {
    //     case 1:
    //         list_output = creat_listoutput_with_filtering_elements(list, predicate_filter_more_5);
    //         break;
    //     case 2:
    //         list_output = creat_listoutput_with_filtering_elements(list, predicate_filter_even_number);
    //         break;
    // }
    remove_element_in_list(list);
    
    list_print(list);

    

}
