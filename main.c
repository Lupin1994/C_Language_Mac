#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include "List.h"

bool filter_predicate(int choose_number){
    printf("%d\t",choose_number);
    switch (choose_number)
    {
        case 1:
            return &predicate_more_5;
        case 2:
            return &predicate_even_number;
    }
}
bool* predicate_more_5(int element){
    //printf("%d\t",element);
    bool result;
    result = element > 5 ? true : false;
    return (bool*)result;
}
bool* predicate_even_number(int element){
    bool result;
    result = element % 2 == 0 ? true : false;
    return (bool*)result;
}

int main()
{
    TList *list = list_create();
    int item, _count_element = 1;
    char _stop_char;
    do
    {
        printf("\nWrite element number - %d : ", _count_element);
        scanf("%d", &item);
        list_add(list, item);
        _count_element++;
        getchar();
        printf("Next (y/n)? ");
        _stop_char = getchar();
    } while (_stop_char == 'y');

    printf("Choose your way of filtration: \n");
    printf(" 1-numbers more 5\t 2-only even numbers\n");
    printf("Write your number: ");
    int choose_number;
    scanf("%d",&choose_number);

    filter_predicate(choose_number);
    TList *list_output = filter_even(list, filter_predicate);
    
    list_print(list_output);
    
}
