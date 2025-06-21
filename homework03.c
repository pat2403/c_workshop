// โปรแกรมคำนวณค่าไฟฟ้าที่ใช้ภายในบ้าน

#include <stdio.h>

int main(){
    int numhome;
    int unit;
    double total;

    printf("++++++++++++++++++++++++++++++++++\n");
    printf("Program Electric\n");
    printf("++++++++++++++++++++++++++++++++++\n");
    printf("Enter home number : ");
    scanf("%d", &numhome);
    printf("Enter unit of electric : ");
    scanf("%d", &unit);

    if (unit < 20)
    {
        total = unit * 5.00;
    }else if (unit >= 20 && unit < 50)
    {
        total = unit * 4.50;
    }else if (unit >= 50) 
    {
        total = unit * 4.00;
    }
    printf("++++++++++++++++++++++++++++++++++\n");
    printf("Pay for electric use is %.2f\n", total);
    printf("++++++++++++++++++++++++++++++++++\n");
    
    return 0;
}
    