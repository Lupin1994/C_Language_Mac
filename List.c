#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include "List.h"


TList* list_create() {
    TList *list = (TList*) malloc(sizeof(TList));
    list->length = 0;
    list->array_size = 0;
    list->array = (int*) malloc(list->array_size * sizeof(int));
    return list;
}

void list_print(TList *list) {
    printf("[");
    for (int i = 0; i < list->length; i++)
    {
        printf("%d,\t", list->array[i]);
    }
    printf("]\n");
}


void list_add(TList *_entry_list, int item) { // Добавление одного элемента

    if (_entry_list->array_size <= _entry_list->length)
    {
        _entry_list->array_size += 1;
        _entry_list->array = (int*)realloc(_entry_list->array,_entry_list->array_size * sizeof(int));
    }
    
    _entry_list->array[_entry_list->length] = item;
    _entry_list->length++;
}

int list_get_length(TList *list) { // Через каунтер
int list_length = list->length;
return list_length;
}


TList* creat_listoutput_with_filtering_elements(TList *list) {
    TList *list_output = list_create();
        switch (Choose_number())
    {
        case 1:
            for (int i = 0; i < list->length; i++)
            {
                if (predicate_filter_more_5(list->array[i])==true)
                {
                    list_add(list_output, list->array[i]);
                }  
            }
            return list_output;
        case 2:
            for (int i = 0; i < list->length; i++)
            {
                if (predicate_filter_even_number(list->array[i])==true)
                {
                    list_add(list_output, list->array[i]);
                }  
            }
            return list_output;
    }
}
//     for (int i = 0; i < list->length; i++)
//     {
//         if (choose_predicate(choose_number, list->array[i]) == true)
//         {
//             list_add(list_output, list->array[i]);
//         }
//     }
//     return list_output;
// }

