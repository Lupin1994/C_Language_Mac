#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int* filter_Even(int input_array_size, int *input_array)
{
    int p = 0;
    int *output_array = malloc(input_array_size * sizeof(int)); //веделение памяти | free(output_array); --освобождение памяти
    for (int i = 0; i < input_array_size; i++)
    {
        if (input_array[i] % 2 == 0)
        {
            output_array[p] = input_array[i];
            p++;
        }
    }
    return (int *)output_array; // typecast
}

void *print_Array(int *array,int array_size) {

    printf("[");
    for (int i = 0; i < array_size; i++) {
        printf("%d\t",array[i]);
    }
    printf("]\n");

    return 0;
}
int main()
{
    int input_array[5];
    int input_array_size = sizeof(input_array) / sizeof(input_array[0]);
    int element = 0;
    //printf("%d",input_array_size);

    for (int i = 0; i < input_array_size; i++)
    {
        printf("Write element number - %d : ",i+1);
        input_array[i] = scanf("%d",&element);
        printf("\n element = %d \n",element);

    }
    printf("[");
    for (int i = 0; i < input_array_size; i++) {
    printf("%d\t",input_array[i]);
    }
    printf("]\n");

    //print_Array(input_array,input_array_size);
    //filter_Even(input_array_size, input_array);

    //print_Array(filter_Even(input_array_size, input_array), input_array_size);
}