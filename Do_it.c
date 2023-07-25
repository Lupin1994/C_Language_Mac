#include <stdio.h>
#include <stdlib.h>


int* filter_Even(int input_array_size, int input_array[], int *output_array)
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
    return (int *)output_array; // typecast
}
void *print_Array(int *array,int size) {

    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d \t",array[i]);
    }
    printf("]\n");

    return 0;
}
int main()
{
    int input_array[] = {6, 1, 4, 9, 2};

    int input_array_size = sizeof(input_array) / sizeof(input_array[0]);

    int *output_array = malloc(input_array_size * sizeof(int)); //веделение памяти | free(output_array); --освобождение памяти

    filter_Even(input_array_size, input_array, output_array);

    print_Array(filter_Even(input_array_size, input_array, output_array),input_array_size);
    // printf("p[0] = %d\n", p[0]);
    // printf("p[1] = %d\n", p[1]);
    // printf("p[2] = %d\n", p[2]);
}