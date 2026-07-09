#include <stdio.h>

int main() {
    char name[70];
    char university[70];
    char department[70];
    int age;
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your university: ");
    scanf("%s",university);
    printf("Enter your department: ");
    scanf("%s",department);
    
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("University: %s\n",university);
    printf("Department: %s\n",department);

    return 0;


}