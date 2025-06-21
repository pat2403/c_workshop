// โปรแกรมคำนวณอัตราดอกเบี้ยเงินกู้

#include <stdio.h>

int main( ){
    int money ;
    char name[] = " ";
    float benefit ;

    printf("----------------------------------\n");
    printf("Program Benifit of loan\n");
    printf("----------------------------------\n");
    printf("Enter name of loan : ");
    scanf("%s",&name);
    printf("Enter money of loan : ");
    scanf("%d",&money);

    if (money >= 1000)
    {
        benefit = money * 0.025;
    }else {
        benefit = money * 0.055;
    }
    printf("----------------------------------\n");
    printf("Benefit of loan is : %.2f\n",benefit);
    printf("---------------------------------\n");
    return 0;
}