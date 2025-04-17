#include<stdio.h>
int main(){
    int age=20;
    int* ptr=&age;
    printf("%d\n",age);
    printf("%p\n",ptr);
    printf("%p",&age);
    return 0;
}