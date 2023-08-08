#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include "List.h"
// ChooseNumber* get_number(){
//     ChooseNumber *choose_number = (ChooseNumber*) malloc(sizeof(int));
//     printf("Choose your way of filtration: \n");
//     printf(" 1-numbers more 5\t 2-only even numbers\n");
//     printf("Write your number: ");
//     choose_number = 0;
//     scanf("%d",&choose_number->choose_number);
//     return choose_number;
// }
int get_number(){
    printf("Choose your way of filtration: \n");
    printf(" 1-numbers more 5\t 2-only even numbers\n");
    printf("Write your number: ");
    int choose_number = 0;
    scanf("%d",&choose_number);
    return choose_number;
}

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

bool filter_predicate(int choose_number, int element){

    switch (choose_number)
        {
        case 1:
            if (element > 5){
                return true;
            }
        case 2:
            if (element % 2 == 0){
                return true;
            }
        default:
            return false;
        }
}

TList* filter_even(TList *list) {
    TList *list_output = list_create();
    int choose_number = get_number();
    // printf("Choose your way of filtration: \n");
    // printf(" 1-numbers more 5\t 2-only even numbers\n");
    // int choose_number;
    // printf("Write your number: ");
    // scanf("%d",&choose_number);
    for (int i = 0; i < list->length; i++)
    {
        if (filter_predicate(choose_number, list->array[i]) == true)
        {
            list_add(list_output, list->array[i]);
        }
    }
    
    // for (int i = 0; i < list->length; i++)
    // {
    //     switch (choose_number)
    //     {
    //     case 1:
    //         if (list->array[i] > 5){
    //             list_add(list_output, list->array[i]);
    //         }
    //         continue;
    //     case 2:
    //         if (list->array[i] % 2 == 0){
    //             list_add(list_output, list->array[i]);
    //         }
    //     }
    // }
    return list_output;
}

