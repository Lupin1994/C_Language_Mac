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
typedef struct output_array Second_array; // Определение нового типа

struct output_array // Создание структуры входного массива
{
    int size_array;
    int *output_array;
};

Second_array filter_Even(int input_array_size, int *input_array)
{

    Second_array second_array = {.size_array = malloc(sizeof(int)),
    .output_array = malloc(sizeof(int[input_array_size]))};
    second_array.size_array = 0;

    for (int i = 0; i < input_array_size; i++)
    {
        if (input_array[i] % 2 == 0)
        {
            second_array.output_array[second_array.size_array] = input_array[i];
            second_array.size_array++;
        }
    }
    return second_array; // typecast
}

typedef struct input_array First_array; // Определение нового типа

struct input_array // Создание структуры входного массива
{
    int size_array;
    int count_add_numbers;
    int *start_input_array;
};


First_array my_array_list(){
    int _size_array = 2;
    First_array first_array = {.size_array = _size_array, .count_add_numbers = malloc(_size_array * sizeof(int)),
    .start_input_array = malloc(sizeof(int[_size_array]))};
    first_array.count_add_numbers = 0;
    
    char stop_char;
    char end = 's';

    bool flag = true;

    while (flag == true)
    {
        
        if(_size_array > first_array.count_add_numbers){
            for (int i = first_array.count_add_numbers; i <= _size_array; i++)
            {
                printf("[");
                    for (int i = 0; i < first_array.count_add_numbers; i++) {
                        printf("%d\t",first_array.start_input_array[i]);
                    }
                    printf("]\n");
                printf("\nWrite element number - %d : ",first_array.count_add_numbers+1);
                scanf("%d",&first_array.start_input_array[i]);
                printf("\n element = %d \n",first_array.start_input_array[i]);
                printf("If you want stop push -s :\n");
                scanf("%c",&stop_char);
                if (stop_char == end)
                {       
                    flag =false;
                    printf("[");
                    for (int i = 0; i < first_array.count_add_numbers; i++) {
                        printf("%d\t",first_array.start_input_array[i]);
                    }
                    printf("]\n");
                    break;
                }
                first_array.count_add_numbers++;
            }
        }
        else{
            _size_array = _size_array * 2;
            int *second_array = malloc(_size_array * sizeof(int));
            for (int i = 0; i <first_array.count_add_numbers;i++)
            {
                second_array[i] = first_array.start_input_array[i];
            }
            first_array.start_input_array = second_array;
        }
    }
    return first_array;
}

int main()
{
    First_array start_array = my_array_list();
    int* _start_array = start_array.start_input_array;
    int start_array_size = start_array.count_add_numbers;
    print_Array(_start_array,start_array_size);

    Second_array output_array = filter_Even(start_array_size,_start_array);
    int* _output_array = output_array.output_array;
    int output_array_size =  output_array.size_array;
    print_Array(_output_array,output_array_size);


}
