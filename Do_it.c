#include <stdio.h>
#include <stdlib.h>

/*Массивы распадаются на указатели при переходе к функции.
Используя только указатель, вы не можете получить размер массива.
Вы должны передать вызывающей функции еще один аргумент,
который является размером массива. Нужно пояснение...*/

int findSizeOutputArray(int size_input_array, int input_array[])
{
    int count_numbers = 0;
    for (int i = 0; i < size_input_array; i++)
    {
        if (input_array[i] % 2 == 0)
        {
            count_numbers++;
        }
    }
    return count_numbers;
}

int fillingOutputArray(int size_input_array, int size_output_array, int input_array[], int *output_array)
{
    int p = 0;
    // int *output_array = malloc(size_output_array * sizeof(int));// веделение памяти под size_output_array колличество элементов
    for (int i = 0; i < size_input_array; i++)
    {
        if (input_array[i] % 2 == 0)
        {
            output_array[p] = input_array[i];
            // printf("%d , ",output_array[p]);
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
    // free(output_array); --типо освобождение памяти
}

int main()
{
    int input_array[] = {6, 1, 4, 9, 2};

    int size_input_array = sizeof(input_array) / sizeof(input_array[0]);

    int size_output_array = findSizeOutputArray(size_input_array, input_array);
    int *output_array = malloc(size_output_array * sizeof(int));

    // printf("This array size: %d",sizeArr2);

    // fillingOutputArray(sizeArr2,input_array);

    int *p = fillingOutputArray(size_input_array, size_output_array, input_array, output_array);
    printf("p[0] = %d\n", p[0]);
    printf("p[1] = %d\n", p[1]);
    printf("p[2] = %d\n", p[2]);
}
