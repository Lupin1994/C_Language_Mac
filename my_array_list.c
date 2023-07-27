#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>

void *print_Array(int *array,int array_size) {

    printf("[");
    for (int i = 0; i < array_size; i++) {
        printf("%d\t",array[i]);
    }
    printf("]\n");

    return 0;
}
int* filter_Even(int input_array_size, int size_output_array, int input_array[], int *output_array)
{
    int p = 0;
    for (int i = 0; i < input_array_size; i++)
    {
        if (input_array[i] % 2 == 0)
        {
            output_array[p] = input_array[i];
            p++;
        }
    }
    printf("[");
    for (int i = 0; i < size_output_array; i++)
    {
        printf("%d ", output_array[i]);
    }
    printf("]\n");

    return (int *)output_array; // typecast
}
typedef struct input_array First_array; // Определение нового типа

struct input_array // Создание структуры входного массива
{
    int size_array;
    int count_add_numbers;
    int *start_input_array;
};


void my_array_list(){
    int _size_array = 2;
    int _count_add_numbers = 0;
    First_array first_array = {.size_array = _size_array, .count_add_numbers = _count_add_numbers,
    .start_input_array = malloc(sizeof(int[_size_array]))};
    //int *first_array = malloc(size_array * sizeof(int));
    int *second_array;
    
    char stop_char;
    char end = 's';
    // printf("If you want stop push -s\n");
    // scanf("%c");
    bool flag = true;

    while (flag == true)
    {
        
        if(_size_array > _count_add_numbers){
            for (int i = _count_add_numbers; i <= _size_array; i++)
            {
                printf("[");
                    for (int i = 0; i < _count_add_numbers; i++) {
                        printf("%d\t",first_array.start_input_array[i]);
                    }
                    printf("]\n");
                printf("\nWrite element number - %d : ",_count_add_numbers+1);
                scanf("%d",&first_array.start_input_array[i]);
                printf("\n element = %d \n",first_array.start_input_array[i]);
                printf("If you want stop push -s :\n");
                scanf("%c",&stop_char);
                if (stop_char == end)
                {       
                    flag =false;
                    printf("[");
                    for (int i = 0; i < _count_add_numbers; i++) {
                        printf("%d\t",first_array.start_input_array[i]);
                    }
                    printf("]\n");
                    break;
                }
                _count_add_numbers++;
            }
        }
        else{
            _size_array = _size_array * 2;
            int *second_array = malloc(_size_array * sizeof(int));
            for (int i = 0; i <_count_add_numbers;i++)
            {
                second_array[i] = first_array.start_input_array[i];
            }
            first_array.start_input_array = second_array;
        }
    }
}

int main()
{
    my_array_list();

    //print_Array();
}
