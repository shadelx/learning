#include <stdio.h>
#include <stdlib.h>

void printArray(int array[], int size);
int main(int argc, char const *argv[])
{
    /* dynamic memory array and sum of his values */
    int n=0,sum=0,i=0;

    printf("give the array size: \n");  
    scanf("%d",&n);
    int *arry=(int*)malloc(n*sizeof(int));
    
    while(i<n)
    {
        printf("value array %d: \n",i);  
        scanf("%d",&arry[i]);
        sum=sum+arry[i];
        i++;
    }

    printArray(arry, n);

    free(arry);
    printf("total: %d\n",sum);
    return 0;
}

void printArray(int array[], int size){
    printf("[ ");
    for (int i = 0; i < size; i++)
    {   
        printf("%d ", array[i]);
    }
    printf("]\n");
}
