#include "stdio.h"
void main(){
    int a = 10;
    int b;

    b = ++a;
    printf("A = %d\n", a); //11
    printf("B = %d\n",b); //11
    printf("---------------\n");

    b = a++;
    printf("A = %d\n", a); //12
    printf("B = %d\n", b); //11
    printf("---------------\n");

}