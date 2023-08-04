#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include "List.h"

int main()
{
    TList list = list_create();
    int item,_count_element = 1;
    char _stop_char;
    do
    {
        printf("\nWrite element number - %d : ",_count_element);
        scanf("%d",&item);
        list_add(&list,item);
        _count_element++;
        getchar();
        printf("Next (y/n)? ");
        _stop_char = getchar();
    } while (_stop_char == 'y');

    list_print(&list);

    T_output_List list_output = list_output_create();
    filter_even(&list,&list_output);
    list_output_print(&list_output);

    // int size = sizeof(&list._start_input_array);
    // printf("%d",size);
}
