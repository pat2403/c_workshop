//output statement คือ คำสั้งที่ใข้ในการแสดงข้อมูลออกมา
//printf() -> stdio.h
//puts() -> stdio.h แสดงข้อความ
//putchar() -> stdio.h แสดงตัวอักษรตัวเดียว

#include <stdio.h>

void main (){
    int score1 = 50, score2 = 70;
    char fname[] = "Somsee";
    char flag = 'Y'; 

    printf("ABC....  XYZ\n %d",616);
    puts("\nABC....  XYZ\n");
    printf("\nValue =  %d",100); 
    printf("\nHello.... %s %d %s","Sombat",456, "Somyot"); 
    putchar('A');
    puts("\nHellloworld");
    printf("\n-------------------------\n");
    printf("Score 1 = %d\n", score1);
    printf("Score 2 = %d\n", score2);
    printf("First name = %s\n", fname);
    puts(fname);
    putchar(flag);
    printf("flag is %c\n", flag);

}

