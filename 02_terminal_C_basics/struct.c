// struct.c
#include <stdio.h>

// Our first custom data structure
typedef struct Student{
    int age;
    int id;
}student_t;

int main(){

    student_t systemsClass[100];
    
    systemsClass[0].age = 97;
    systemsClass[0].id = 1010;
    
    systemsClass[1].age = 17;
    systemsClass[1].id = 1011;

    // ...
    return 0;
}


