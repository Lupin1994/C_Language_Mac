#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>


void my_array_list(){
    int size_array = 2;
    int count_add_numbers = 0;
    int first_array[size_array];

    char stop_char;
    char end = 's';

    while (true)
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
    return 0;
}

int main()
{
    my_array_list();
    return 0;
}
