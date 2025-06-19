// control Statement : switch พิสูจย์/ตรวจสอบหลายครั้ง แต่เป็นการพิสูจย์ว่าเท่ากันหรือไมี่ และพิสูจย์ได้เฉพาะตัวเลขและตัวอักษร

//ตย.โปรแกรมตรวจสอบสายรถเมล์ จากการป้อนข้อมูลสายรถเมล์จากผู้ใช้งานและแสดงออกมา
// กรณีผู้ใช้งานป้อนสาย 3 แสดงข้อความ Go to Sanamlung
// กรณีผู้ใช้งานป้อนสาย 123 แสดงข้อความ Go to Pinkloa
// กรณีผู้ใช้งานป้อนสาย 84 แสดงข้อความ Go to Wat Rai King
// กรณีผู้ใช้งานป้อนสาย 81 แสดงข้อความ Go to Oam Noi
// กรณีผู้ใช้งานป้อนสาย อื่นๆ แสดงข้อความ Don't have data of BUS Number
#include <stdio.h>

int main(void){
    int busNo;
    printf("Enter Bus Number : ");
    scanf("%d", &busNo);
    printf("-------------------------\n");

    if (busNo == 3)
    {
        printf("Go to Sanamlung\n");
    }else if (busNo == 123)
    {
        printf("Go to Pinkloa\n");
    }else if (busNo == 84)
    {
        printf("Go to Wat Rai King\n");
    }else if (busNo == 81)
    {
        printf("Go to Oam Noi\n");
    }else
    {
        printf("Don't have data of BUS Number\n");
    }
    
}