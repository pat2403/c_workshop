//input statement
//scanf() -> stdio.h รับค่า่ได้ทุกชนิด
//getchar() -> stdio.h รับตัวอักษร
//getch() -> stdio.h รับตัวอักษร
//gethe() -> stdio.h รับตัวอักษร
#include <stdio.h>

void main(){
    int aa;
    float bb;
    char cc[50];
    char dd, ee , ff, gg;
    
    printf("Input aa Value : ");
    scanf("%d",&aa );
    printf("AA value is %d", aa);
    printf("\nInput bb value : ");
    scanf("%f",&bb);
    printf("BB value is %f\n", bb);
    printf("BB value is %.2f\n",bb);
    printf("BB value is %.4f",bb);
    printf("\nInput cc value : ");
    scanf("%s", &cc);
    printf("CC value is %s\n" ,cc);


}