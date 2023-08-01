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

void* list_print(TList *list);
TList list_create();
void* list_add(TList *list, int item);
int list_get_length(TList *list);

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
    //printf("%d",list.count_add_numbers);
}
