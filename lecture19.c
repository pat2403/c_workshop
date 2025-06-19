// Control Statement (Loop) คือ การทำงานเดิมๆ ซ้ำๆ
// มีคำสั่งที่ใช้อยู่ 3 คำสั่ง คือ While, Do While, For 

// ตย. โปรแกรมแสดงข้อความ Hello... ทางหน้าจอ 5 ข้อความ

#include <stdio.h>

int main(void){
    // int x = 1;
    // while ( x <= 5 )
    // {
    //     printf("Hello...\n");
    //     x = ++x;
    // }
    
    // int y;
    // y = 1; 
    // do{
    //     printf("Hello...\n");
    //     y = y + 1;

    // }while (y <= 5);

    int z; 
    for ( z = 50; z > 25; z = z - 5)
    {
        printf("Hello...\n");
    }
    
    return 0;
}