#include <stdio.h>

int array_size(int array[]);
void print_array(int *array, int size);
int *order_array(int *array, int size);
int calcualte_sum(int array[],int size);

int main(){
    
    int array_list[] = {5 ,4 ,3 ,2 ,1};
    int size = sizeof(array_list)/sizeof(array_list[0]);

    printf("size of array: %d\n", size);
    printf("array address: %p\n",array_list);
    printf("array address: %p\n",&array_list);
    
    print_array(array_list, size);
    print_array(order_array(array_list,size),size);

    printf("%d",calcualte_sum(array_list,size));
    return 0;
}
// int array_size(int array[]){
//     //int array_size(int array[]) is equivalent to int array_size(int *array)
//     printf("%ld\n",sizeof(array)); //this is wrong it returns sizeof(int *) as array[] is a pointer
//     printf("%ld\n",sizeof(array[0]));

// }

int calcualte_sum(int array[],int size){
    int sum = 0;

    for(int i =0;i<size; ++i){
        sum+=array[i];
    }
    return sum;
}

void print_array(int *array, int size){
    
    for(int i = 0; i<size; ++i){
        printf("%d, ", array[i]);
    }
    printf("\n\n");
}

int * order_array(int * array,int size){
    int temp = 0;
     for(int i = 0; i<size;i++){
         for(int j = i+1; j<size;j++){
             if(array[i]>array[j]){
                 temp = array[i];
                 array[i] = array[j];
                 array[j] = temp;
             }
         }
     }

     return array;
}
