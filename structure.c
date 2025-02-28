#include <stdio.h>


struct Person {
    char name[50];
    int age;
    float height;
};

int main(){
    struct Person person1;

    printf("Enter Name :");
    scanf("%s", person1.name);
    printf("Enter Age:");
    scanf("%d",&person1.age);
    printf("Enter Height :");
    scanf("%f",&person1.height);

    printf("\nName   : %s ", person1.name);
    printf("\nAge    :%d ", person1.age);
    printf("\nHeight :%f", person1.height);

    return 0;


    
}


