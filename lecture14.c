// control Statement : if ตรวจสอบครั้งเดียว
// พิสูจย์ตัวเลขที่ได้รีบจากผู้ใข้ว่ามากกว่า 0 หรือไม่ หากมากกว่า  0 จริงให้แสดง Positive
#include "stdio.h"
void main()
{
    int number;
    printf("Input Number : ");
    scanf("%d", &number);
    if ( number > 0 )
    {
        printf("Positive number\n");
    }
    
}