// control Statement : if ตรวจสอบครั้งเดียวจริงทำอย่าง เท็จทำอย่าง
// if else
#include "stdio.h"
void main()
{
    int number;
    printf("Input Number : ");
    scanf("%d", &number);
    if (number > 0)
    {
        printf("Positive Number\n",number);
    }
    else{
        printf("Negative Number\n",number);
    }
}
