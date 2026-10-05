#include <stdio.h>

//  Person is the tag of the struct defined below. Tag is used to recall the type of personalized struct.
struct Person {

    int eta;
    char nome[15];
    char sex;
};

/*  typedef operator convert a type into a new one. In this case Car became the type of the struct defined below.
    it's an alias. */
typedef struct {
 
    int year;
    char model[50];
} Car; 


int main(){

    struct Person p1 = {22, "Carlo", 'M'};

    Car car = {2021, "Yaris"};

    // To print a struct you have to specify every single field of the struct
    printf("eta: %d\nnome: %s\nsesso: %c", p1.eta, p1.nome, p1.sex);

    putchar('\n');
    putchar('\n');

    printf("anno: %d\nmodello: %s", car.year, car.model);

return 0;}