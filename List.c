#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>

typedef struct List TList; // Определение нового типа

struct List // Создание структуры входного массива
{
    int count_add_numbers;

    int _size_array;
    int *_start_input_array;
};

void* list_print(TList *list) {
    printf("[");
    for (int i = 0; i < list->count_add_numbers; i++)
    {
        printf("%d,\t", list->_start_input_array[i]);
    }
    printf("]\n");
}

TList list_create() {
    TList list = {
        ._size_array = 1,
        .count_add_numbers = 0,
        ._start_input_array = malloc(sizeof(int[list._size_array]))
        //._start_input_array = NULL
    };
    //list._start_input_array = (int*)realloc(list._start_input_array,(list.count_add_numbers + 1) * sizeof(int) );
    return list;
}

void* list_add(TList *list, int item) { // Добавление одного элемента
    if (list->_size_array <= list->count_add_numbers)
    {
        list->_size_array *= 2;
    }
    
    list->_start_input_array[list->count_add_numbers] = item;
    list->count_add_numbers++;
}

int list_get_length(TList *list) { // Через каунтер
int list_length = list->count_add_numbers;
return list_length;
}


// int main()
// {
//     // TList list = list_create();
//     // int item = 5;
    
//     // list_add(&list,item);
//     // list_add(&list,item);
//     // list_add(&list,item);
//     // list_add(&list,item);
//     // list_add(&list,item);

//     // list_print(&list);
//     // printf("%d",list.count_add_numbers);
// }
