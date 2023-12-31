#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
typedef struct List_output T_output_List; // Определение нового типа

struct List_output // Создание структуры входного массива
{
    int _output_list_size;
    int *_output_list;
};

T_output_List list_output_create() {
    T_output_List list_output = {
        ._output_list_size = 0,
        ._output_list=(int*) malloc(list_output._output_list_size * sizeof(int))
        //._start_input_array = NULL
    };
    return list_output;
}
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

void* list_output_print(T_output_List *list_output) {
    printf("[");
    for (int i = 0; i < list_output->_output_list_size; i++)
    {
        printf("%d,\t", list_output->_output_list[i]);
    }
    printf("]\n");
}


void* list_add(TList *list, int item) { // Добавление одного элемента
    if (list->_size_array <= list->count_add_numbers)
    {
        list->_size_array += 1;
        list->_start_input_array = (int*)realloc(list->_start_input_array,list->_size_array * sizeof(int));
    }
    
    list->_start_input_array[list->count_add_numbers] = item;
    list->count_add_numbers++;

}

int list_get_length(TList *list) { // Через каунтер
int list_length = list->count_add_numbers;
return list_length;
}

void filter_even(TList *list, T_output_List *list_output) {

    for (int i = 0; i < list->count_add_numbers; i++)
    {
        if (list->_start_input_array[i] % 2 == 0)
        {
            list_output->_output_list_size++;
        }
    }

    list_output->_output_list = (int*)realloc(list_output->_output_list,list_output->_output_list_size * sizeof(int));
    int j = 0;
    for (int i = 0; i <list->count_add_numbers; i++)
    {
        if (list->_start_input_array[i] % 2 == 0)
        {
            list_output->_output_list[j] = list->_start_input_array[i];
            j++;
        }
    }
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
