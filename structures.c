#include<stdio.h>
    struct structures
    {
        int numbers;
        char letters;
    };
    int main(){
        struct structures s1;
           s1.numbers=55;
            s1.letters='y';
        printf("letter is:%c\n",s1.letters);
        printf("number is:%d",s1.numbers);
}