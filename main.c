#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "List.h"

int main()
{
    // printf("Choose what I need to do. \n");
    // printf("I can:\n");
    // printf("1) Create list and add element to it\n2)Make list with filtering\n3)Remove element with list by index\n4)Update list add element by index\n5)Push 5 and close programm");
    // int choose_action;
    // scanf("%d",&choose_action);
    // do
    // {
    //     switch (choose_action)
    //     {
    //     case 1:
    //         TList* list = list_create();
    //         int item, _count_element = 1;
    //         char _stop_char;
    //         do
    //         {
    //             printf("\nWrite element number - %d : ", _count_element);
    //             scanf("%d", &item);
    //             list_add(list, item);
    //             _count_element++;
    //             getchar();
    //             printf("Next (y/n)? ");
    //             _stop_char = getchar();
    //         } while (_stop_char == 'y');
    //         break;
    //     case 2:
    //         printf("Choose your way of filtration: \n");
    //         printf(" 1-numbers more 5\t 2-only even numbers\n");
    //         printf("Write your number: ");
    //         int choose_number;
    //         scanf("%d",&choose_number);
    //         TList *list_output = list_create();
    
    //         switch (choose_number)
    //         {
    //         case 1:
    //             list_output = creat_listoutput_with_filtering_elements(list, predicate_filter_more_5);
    //             break;
    //         case 2:
    //             list_output = creat_listoutput_with_filtering_elements(list, predicate_filter_even_number);
    //             break;
    //         }
    //     case 3:
    //         int index;
    //         printf("Write index element who need remove: ");
    //         scanf("%d",&index);
    //         list_remove_by_index(list,index);
    //         list_print(list);
    //         break;
    //     case 4:
    //         int index, element;
    //         TList* list_output = list_create();
    //         printf("Write element who you want add : ");
    //         scanf("%d", &element);
    //         printf("Write index element: ");
    //         scanf("%d",&index);
    //         list_output = list_update_elements(list,element,index);
    //         list_print(list_output);
    //         break;
    //     case 5:
    //         break;
    // }
    // } while (choose_action != 5);
    
   

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
    //int index, element;
    
    // printf("Write element who you want add : ");
    // scanf("%d", &element);
    // int count = list_search_element(list, element, predicate_search_equal_element);
    // printf("%d",count);
    // printf("Write index element: ");
    // scanf("%d",&index);
    // list_update_element_by_index(list,element,index);
    // list_print(list);
    // list_reverse(list);
    // list_print(list);
    // list_output = list_add_elements_by_index(list,element,index);
    // list_print(list_output);
    TList* list_output = list_create();
    list_output = map(list, Map_transform_element);
    list_print(list_output);


    

}
