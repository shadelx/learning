#include <stdio.h>
// pointer to array, array of pointers, pointer to function, pointer of pointers, string with char pointer

void print_something();
void print_someone();

typedef struct person
{
    char * name;
    int age;
}Person;

int main()
{

    int x[3] = {2, 6, 4};
    // pointer to array, it points to first value
    int *x_ptr = x;
    
    printf("array address: %p\n", x);
    printf("pointer address: %p\n", x_ptr);

    //array pf pointers
    int value = 20;
    int *a_ptr[3];
    a_ptr[1] = &value;

    printf("value: %d\n", *a_ptr[1]);

    //pointer to function
    void (*func)() = &print_something;
    (*func)();

    //array of function pointers
    void (*func_array[2])() = {&print_something, &print_someone};

    for (int  i = 0; i < 2; i++)
    {
      (*func_array[i])();  
    }
    
    //string literal
    char *string_literal = "hello, there";
    printf("%s\n", string_literal);
    string_literal = "banana";
    printf("%s\n", string_literal);

    //pointer to structure
    Person p1,*p1_ptr;
 
    p1_ptr = &p1;

    p1_ptr->name = "black";
    p1_ptr->age = 20;
    

    printf("p1 name %s\n", p1_ptr->name);
    printf("p1 age %d\n", p1_ptr->age);

    //array of pointer to structure
    Person *p1_array[2];

    p1_array[0] = &p1;

    p1_array[0]->name = "adam";
    p1_array[0]->age = 35;

    printf("p1 name %s\n", p1_array[0]->name);
    printf("p1 age %d\n", p1_array[0]->age);

    return 0;
}

void print_something(){
    printf("something\n");
}

void print_someone(){
    printf("someone\n");

}
