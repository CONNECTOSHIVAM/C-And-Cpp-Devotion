// Q.write a calculate the simple interst.

#include<stdio.h>
int main(){

    int total= 1250;
    int rate= 6;
    int time= 5;

    float si = (total*rate*time)/100;
    printf("Simple interst is : %.2f",si);
    return 0;
}