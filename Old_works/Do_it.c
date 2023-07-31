#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>


int* my_array_list(){
    int count_add_numbers = 0;
    int size_array = 2;
    
    int *first_array = malloc(size_array * sizeof(int));
    int *second_array;

    char stop_char;
    char end = 's';

    bool flag = true;

    while (flag == true)
    {
        
        if(size_array > count_add_numbers){
            for (int i = count_add_numbers; i <= size_array; i++)
            {
                printf("[");
                    for (int i = 0; i < count_add_numbers; i++) {
                        printf("%d\t",first_array[i]);
                    }
                    printf("]\n");
                printf("\nWrite element number - %d : ",count_add_numbers+1);
                scanf("%d",&first_array[i]);
                printf("\n element = %d \n",first_array[i]);
                printf("If you want stop push -s :\n");
                scanf("%c",&stop_char);
                if (stop_char == end)
                {       
                    flag =false;
                    printf("[");
                    for (int i = 0; i < count_add_numbers; i++) {
                        printf("%d\t",first_array[i]);
                    }
                    printf("]\n");
                    break;
                }
                count_add_numbers++;
            }
        }
        else{
            size_array = size_array * 2;
            int *second_array = malloc(size_array * sizeof(int));
            for (int i = 0; i <count_add_numbers;i++)
            {
                second_array[i] = first_array[i];
            }
            first_array = second_array;
        }
    }
    return (int*)first_array;
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
    
    //int *first_array = malloc(size_array * sizeof(int));

    int *input_array = my_array_list();
    printf("p[0] = %d\n", input_array[0]);
    printf("p[1] = %d\n", input_array[1]);
    printf("p[2] = %d\n", input_array[2]);


    int input_array_size = sizeof(input_array) / sizeof(input_array[0]);
    printf("This array size: %d",input_array_size);
    //print_Array(input_array);

    //print_Array(input_array,input_array_size);
    //filter_Even(input_array_size, input_array);

    //print_Array(filter_Even(input_array_size, input_array), input_array_size);

}