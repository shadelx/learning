#include <stdio.h>
#include <stdlib.h>

int main(){
    //define pointer
    int* ptr;
    int n, i, sum = 0;
    n = 5;
    printf("enter number of elemenets> %d\n",n);
    //define array with dynamic memory with malloc
    ptr = (int*)malloc(n * sizeof(int));
    //ptr = (int*)calloc(n, sizeof(int));
    if(ptr ==NULL){
        printf("memory not allocated.\n");
        exit(0);
    }
    else {
        printf("memory succesfully allocated using malloc.\n");
        for(i = 0; i< n ; ++i){
            ptr[i] = i + 1;
        }
        printf("the elements of the array are: ");
        for (i = 0; i < n; ++i){
            printf("%d ", ptr[i]);
        }
    }
    n=10;
    printf("\n\nEnter the new size of array: %d\n", n);
    ptr = realloc(ptr, n * sizeof(int));
    printf("memory successfully re-allocated using realloc, \n");
    for (i = 5; i < n; ++i){
        ptr[i] = i + 1;
    }
    printf("the elements of the array are: ");
    for (i = 0; i<n; ++i){
        printf("%d, ",ptr[i]);
    }

    free(ptr);
    
    return 0;
}