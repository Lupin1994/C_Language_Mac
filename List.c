#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include <limits.h>

typedef struct List TList; // Определение нового типа

struct List // Создание структуры входного массива
{
    int count_add_numbers;

    int _count_call_function;
    int *_start_input_array;
};

void* list_print(TList *list, int list_size) {
    printf("[");
    for (int i = 0; i < list_size; i++)
    {
        printf("%d", list[i]);
    }
    printf("]\n");
}

TList list_create() {
    TList list = {
        ._count_call_function = 0,
        .count_add_numbers = 0,
        ._start_input_array = realloc(list._start_input_array, (list.count_add_numbers + 1) * sizeof(int))
    };
    return list;
}

void* list_add(TList *list, int item) { // Добавление одного элемента

    list->_start_input_array[list->count_add_numbers] = item;
    list->count_add_numbers++;
    list->_count_call_function++;
}

int list_get_length(TList *list) { // Через каунтер
int list_length = list->_count_call_function;
return list_length;
}


int main()
{
    TList list = list_create();
    int item = 5;
    
    list_add(list._start_input_array,item);
    list_print(list._start_input_array,list.count_add_numbers);
    printf("%d",list.count_add_numbers);
}
