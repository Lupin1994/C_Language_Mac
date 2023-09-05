#include <stdio.h>
#include <stdlib.h>
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

void list_remove_by_index(TList *entry_list, int index){

    if (index < 0 && index >= entry_list->length)
    {
        return;
    }

    for (int i = index; i < entry_list->length - 1; i++)
    {
        int next_element = entry_list->array[index + 1];
        entry_list->array[index] = next_element;
    }

    entry_list->length = entry_list->length - 1;
}

TList* list_add_elements_by_index(TList *entry_list, int element, int index_element){

    TList *list_output = list_create();

    for (int i = 0; i < index_element; i++)
    {
        list_add(list_output,entry_list->array[i]);
    }
    
    list_add(list_output, element); 

    for (int i = index_element; i < entry_list->length; i++)
    {
        list_add(list_output,entry_list->array[i]);
    }
    return list_output;
}

void list_update_elements(TList* entry_list, int element, int index_element){
    entry_list->array[index_element] = element;
}

int list_search_element(TList *entry_list, int element, bool (*predicate)(int, int)){
    int count = 0;
    for (int i = 0; i < entry_list->length; i++)
    {
        if (predicate(element, entry_list->array[i]))
        {
            count++;
        } 
    }
    return count;
    
}
void list_reverse(TList *entry_list){

    int j = entry_list->length - 1;

    for (int i = 0; i < entry_list->length / 2; i++)
    {
        int temp_current = entry_list->array[i];
        entry_list->array[i] = entry_list->array[j];
        entry_list->array[j] = temp_current;
        j--;
    }
}

TList* map(TList *entry_list, int (function(int))){
    TList *list_output = list_create(); 

    for (int i = 0; i < entry_list->length; i++)
    {
        list_add(list_output,function(entry_list->array[i]));
    }
    return list_output;
}
