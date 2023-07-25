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
    printf("[");
    for (int i = 0; i < input_array_size; i++)
    {
        printf("%d ", output_array[i]);
    }
    printf("]\n");

    return (int *)output_array; // typecast
}

int main()
{
    int input_array[] = {6, 1, 4, 9, 2};

    int input_array_size = sizeof(input_array) / sizeof(input_array[0]);

    int *output_array = malloc(input_array_size * sizeof(int)); //веделение памяти | free(output_array); --освобождение памяти

    int *p = filter_Even(input_array_size, input_array, output_array);
    printf("p[0] = %d\n", p[0]);
    printf("p[1] = %d\n", p[1]);
    printf("p[2] = %d\n", p[2]);
}
