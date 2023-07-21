#include <stdio.h>

/*Массивы распадаются на указатели при переходе к функции. 
Используя только указатель, вы не можете получить размер массива. 
Вы должны передать вызывающей функции еще один аргумент, 
который является размером массива. Нужно пояснение...*/

int FindSizeArray2(int size, int arr[])
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

int* FillingArray2(int size1,int size2, int arr1[])
{
    int p = 0;
    int arr2[size2];
    for (int i = 0; i < size1; i++)
    {
        if (arr1[i] % 2 == 0)
        {
            arr2[p] = arr1[i];
            //printf("%d , ",arr2[p]);
            p++;
        }
    }
    printf("[");
    for (int i = 0; i < size2; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("]\n");
    
    return arr2;
}



int main()
{
    int arr1[] = {6,1,4,9,2};

    int size1 = sizeof(arr1)/sizeof(arr1[0]);

    int sizeArr2 = FindSizeArray2(size1,arr1);
    //printf("This array size: %d",sizeArr2);

    //FillingArray2(sizeArr2,arr1);

    int *p = FillingArray2(size1,sizeArr2,arr1);
    // printf( "p[0] = %d\n", *p[0] );
    // printf( "p[1] = %d\n", *p[1] );
    // printf( "p[2] = %d\n", *p[2] );


    
}
