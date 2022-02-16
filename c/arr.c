#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /* dynamic memory array and sum of his values */
    int n=0,sum=0,i=0;
      
    scanf("%d",&n);
    int* arry=(int*)malloc(n*sizeof(int));
    
    while(i<n)
    {
        scanf("%d",&arry[i]);
        sum=sum+arry[i];
        i++;
    }
    free(arry);
    printf("%d",sum);
    return 0;
}
