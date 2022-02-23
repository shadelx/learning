#include <iostream>

int array_size(int *array);
void print_array(int *array, int size);
int *order_array(int *array, int size);

int main(){

    int a = 12;
    int *p_a;
    
    int array_list[] = {5 ,4 ,3 ,2 ,1};
    int size_array = sizeof(array_list)/sizeof(array_list[0]);

    int * array_ascending = order_array(array_list, size_array);


    p_a = &a;

    std::cout<<"a value: "<<a<<std::endl;
    std::cout<<"a pointer value: "<<p_a<<std::endl;
    std::cout<<"a pointer direction value: "<<*p_a<<std::endl;
    std::cout<<"size of integer: "<<sizeof(a)<<std::endl;
    std::cout<<"size of pointer: "<<sizeof(p_a)<<std::endl;

    print_array(array_list, size_array);
    std::cout<<"array size: "<<array_size(array_list)<<std::endl;
    std::cout<<"array in order: "<<std::endl;
    print_array(array_ascending, size_array);

    return 0;
}

int array_size(int * a){
    int res = sizeof(a)/sizeof(a[0]);

    return res;
}

void print_array(int *array, int size){
    
    for(int i = 0; i<size; i++){
        std::cout<<array[i]<<std::endl;
    }

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
