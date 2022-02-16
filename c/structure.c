#include <stdio.h>
#include <string.h>

struct Books{
    char title[20];
    int id;
};

typedef struct Autor{
    char name[30];
    int year;
} autor;

int main(int argc, char const *argv[])
{
    //a simple struct reference
    struct Books b1;
    // a typedef structure
    autor a1;
    //declare values of b1 book struct
    strcpy(b1.title, "moby dick"); 
    b1.id = 12;
    //declare values of autor
    strcpy(a1.name, "Herman Melville");
    a1.year = 1851;

    printf("book id %d\n", b1.id);
    printf("book title: %s\n", b1.title);
    printf("book autor: %s\n", a1.name);
    printf("book year: %d\n", a1.year);

    // pointer to structure autptr is a pointer
    autor *autPtr, a2;
    autPtr = &a2;

    //access members of a2 using pointers
    strcpy(autPtr->name, "Jule Verne");
    autPtr->year = 1901;    // (*autPtr).year;

    return 0;
}
