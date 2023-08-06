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

TList list_create() {
    TList list = {
        ._size_array = 1,
        .count_add_numbers = 0,
        ._start_input_array =(int*) malloc(list._size_array * sizeof(int))
        //._start_input_array = NULL
    };
    //list._start_input_array = (int*)realloc(list._start_input_array,(list.count_add_numbers + 1) * sizeof(int) );
    return list;
}

void* list_print(TList *list) {
    printf("[");
    for (int i = 0; i < list->count_add_numbers; i++)
    {
        printf("%d,\t", list->_start_input_array[i]);
    }
    printf("]\n");
}


void list_add(TList *_entry_list, int item) { // Добавление одного элемента
    // TList list_inside = {
    //     ._size_array = 0,
    //     .count_add_numbers = 0,
    //     ._start_input_array = NULL
    // };

    if (_entry_list->_size_array <= _entry_list->count_add_numbers)
    {
        _entry_list->_size_array += 1;
        _entry_list->_start_input_array = (int*)realloc(_entry_list->_start_input_array,_entry_list->_size_array * sizeof(int));
    }
    
    _entry_list->_start_input_array[_entry_list->count_add_numbers] = item;
    _entry_list->count_add_numbers++;
}

int list_get_length(TList *list) { // Через каунтер
int list_length = list->count_add_numbers;
return list_length;
}

TList filter_even(TList *list) {
    TList list_output = {
        ._size_array = 1,
        .count_add_numbers = 0,
        ._start_input_array = (int*) malloc(list_output._size_array * sizeof(int))
    };

    for (int i = 0; i < list->count_add_numbers; i++)
    {
        if (list->_start_input_array[i] % 2 == 0)
        {
            list_add(&list_output,list->_start_input_array[i]);
        }
    }
    return list_output;
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
