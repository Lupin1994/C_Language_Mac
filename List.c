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


TList* creat_listoutput_with_filtering_elements(TList *list, bool (*predicate)(int)) {
    TList *list_output = list_create();

    for (int i = 0; i < list->length; i++)
    {
        if (predicate(list->array[i]) == true)
        {
            list_add(list_output, list->array[i]);
        }
    }
    return list_output;
}
void remove_element_in_list(TList *entry_list){
    int index,next_element;
    printf("Write index element for delete: ");
    scanf("%d",index);
    if (index >= 0 && index < entry_list->length)
    {
        if (index = 0)
        {
            for (int i = 0; i < entry_list->length; i++)
            {
                next_element = entry_list->array[i+1];
                entry_list->array[i] = next_element;
                i++;
            }
            entry_list->length = entry_list->length-1;
        }
        else if (index = entry_list->length-1)
        {
            entry_list->length = entry_list->length-1;
        }
        else
        {
            for (int i = index; i < entry_list->length; i++)
            {
                next_element = entry_list->array[index+1];
                entry_list->array[index] = next_element;
                i++;
            }
            entry_list->length = entry_list->length-1;
        }
    }
  
    

}
