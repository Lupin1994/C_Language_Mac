#include <stdio.h>

// int findArraySize(int arr[])
// {
//     int size = sizeof(arr)/sizeof(arr[0]);
//     return size;
// }

void printArray(int arr[])
{

    for (int i = 0; i < 5; i++)
    {
        printf("%d ,",arr[i]);
    } 
}

// int searchEvenNumber (int array[])
// {

//     for (int i = 0; i < 5; i++)
//     {
//         if (array[i] % 2 == 0)
//         {
//             int number = array[i];
//             printf("%d ,\n",array[i]);
//             return number;
//         }
        
//     }
// }
/*
Возвращение указателя на массив (на начало массива). 
Возвращаемый указатель не может указывать на автоматический массив,
объявленный внутри этой функции,
так как такой массив будет уничтожен при выходе из функции.
*/
int* createArray(int arr[]){ 
    int j = 0;
    int arr2[j];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr2[j] = arr[i];
            printf("%d ,",arr2[j]);
            j++;
        }
    }
    return &arr2;
    //return *((int*)arr2);
}

int main(){

    int arr1[5] = {6,1,4,9,2}; 
    createArray(arr1);


    // int j = 0;
    // int arr2[j];

    // int size = sizeof(arr1)/sizeof(arr1[0]);
    // //printf("%d",size);
    
    // for (int i = 0; i < size; i++)
    // {
    //     if (arr1[i] % 2 == 0)
    //     {
    //         arr2[j] = arr1[i];
    //         j++;
    //     }
    // }

    //printArray(arr2);
    //searchEvenNumber(arr1);
}