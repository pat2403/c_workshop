//input statement
//getchar() -> stdio.h รับตัวอักษร
//getch() -> stdio.h รับตัวอักษร
//gethe() -> stdio.h รับตัวอักษร

#include <stdio.h>

void main(){
    char xx, yy, zz;

    printf("Input xx value : ");
    xx = getchar(); //รับตัวอักษร 1 ตัว
    putchar(xx);

    printf("\n---------------------------\n");

    printf("Input yy value :");
    yy = getch();
    putchar(yy);

    printf("\n--------------------------\n");

    printf("Input zz value : ");
    zz = getche();
    putchar(zz);



}