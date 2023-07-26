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

void my_array_list(){
    int size_array = 2;
    int count_add_numbers = 0;
    
    int *first_array = malloc(size_array * sizeof(int));
    int *second_array;

    char stop_char;
    char end = 's';
    // printf("If you want stop push -s\n");
    // scanf("%c");
    bool flag = true;

    while (flag == true)
    {
        
        if(size_array >= count_add_numbers){
            for (int i = 0; i < size_array; i++)
            {
                printf("Write element number - %d : ",count_add_numbers+1);
                scanf("%d",&first_array[i]);
                printf("\n element = %d \n",first_array[i]);
                count_add_numbers++;
            }
        }
        else{
            size_array *= 2;
            int *second_array = malloc(size_array * sizeof(int));
            for (int i = 0; i < size_array; i++)
            {
                second_array[i] = first_array[i];
            }
            *first_array = &second_array;
        }
        printf("[");
        for (int i = 0; i < size_array; i++) {
            printf("%d\t",first_array[i]);
        }
        printf("]\n");
        printf("If you want stop push -s :");
        flag = scanf("%c",&stop_char) == end ? false:true;
    }
}

int main()
{
    my_array_list();
    return 0;
}
