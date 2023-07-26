#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>

int* my_array_list(){
    int size_array = 2;
    int count_add_numbers = 0;
    int first_array[size_array];

    char stop_char;
    char end = 's';

    printf("If you want stop push - s : ");
    while (scanf("&c",stop_char) != end)
    {
        if(size_array < count_add_numbers){
            for (int i = 0; i < size_array; i++)
            {
                printf("Write element number - %d : ",i+1);
                scanf("%d",&first_array[i]);
                printf("\n element = %d \n",first_array[i]);
                count_add_numbers++;
            }
        }
        else{
            size_array = size_array*2;
            int second_array[size_array];
            for (int i = 0; i < size_array; i++)
            {
                second_array[i] = first_array[i];
            }
            if(size_array < count_add_numbers){
                for (int i = 0; i < size_array; i++)
                {
                    printf("Write element number - %d : ",i+1);
                    scanf("%d",&second_array[i]);
                    printf("\n element = %d \n",second_array[i]);
                    count_add_numbers++;
                }
            }
            else
            {
                size_array = size_array*2;
                for (int i = 0; i < size_array; i++)
                {
                    first_array[i] = second_array[i];
                }
                if(size_array < count_add_numbers){
                    for (int i = 0; i < size_array; i++)
                    {
                        printf("Write element number - %d : ",i+1);
                        scanf("%d",&first_array[i]);
                        printf("\n element = %d \n",first_array[i]);
                        count_add_numbers++;
                    }
                }
            }
        }
    }
}

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
    // printf("Write size array: ");
    // int size;
    // scanf("%d",&size);
    // int input_array[size];
    // int input_array_size = sizeof(input_array) / sizeof(input_array[0]);
    // //int element = 0;
    // //printf("%d",input_array_size);

    // for (int i = 0; i < input_array_size; i++)
    // {
    //     printf("Write element number - %d : ",i+1);
    //     //input_array[i] = scanf("%d",&element); было
    //     scanf("%d",&input_array[i]);
    //     printf("\n element = %d \n",input_array[i]);

    // }
    my_array_list();

    //print_Array(input_array,input_array_size);
    //filter_Even(input_array_size, input_array);

    //print_Array(filter_Even(input_array_size, input_array), input_array_size);

}