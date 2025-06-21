// โปรแกรมคำนวณค่าเช่าแท็กซี่ 
#include <stdio.h>

int main( ){
    char name[] = " ";
    int carno ;
    int hour ;
    float rent ;

    printf("++++++++++++++++++++++++++++++++++\n");
    printf("Program Rent Taxi\n");
    printf("++++++++++++++++++++++++++++++++++\n");
    printf("Enter name for rent : ");
    scanf("%s",&name);
    printf("Enter car number for rent : ");
    scanf("%d",&carno);
    printf("Enter hour for rent : ");
    scanf("%d",&hour);

    if (hour >= 16 )
    {
        rent = hour * 70.50;
    }else if (hour >= 11 )
    {
        rent = hour * 80.00;
    }else if (hour >= 6 )
    {
        rent = hour * 90.50; 
    }else if (hour <= 5 )
    {
        rent = hour * 100;
    }

    printf("++++++++++++++++++++++++++++++++++\n");
    printf("Pay for rent is : %.2f\n",rent);
    printf("++++++++++++++++++++++++++++++++++\n");

    return 0;
}