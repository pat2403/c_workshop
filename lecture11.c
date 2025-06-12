//input statement
//gets() -> stdio.h รับข้อความ

#include <stdio.h>

void main(){

    char nickname[100], nickname2[100], nickname3[100];

    printf("Input your nickname 1 : ");
    gets(nickname);
    printf("Nickname 1 is %s\n",nickname);

    printf("--------------------------\n");

    printf("Input your nickname 2 : ");
    scanf("%s", &nickname2);
    printf("Nickname 2 is %s\n", nickname2);

    printf("--------------------------\n");

    printf("Input your nickname 3 : ");
    gets(nickname3);
    printf("Nickname 3 is %s\n", nickname3);
}