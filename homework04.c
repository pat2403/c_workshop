// โปรแกรมคำนวณค่าใช้จ่ายในการซื้อแพ็กเกจท่องเที่ยวของกรุ๊ปทัวร์

#include <stdio.h>

int main() {
    char name[] = " "; 
    int telephone ;
    int peple ;
    double price ;

    printf("++++++++++++++++++++++++++++++++++\n");
    printf("Program Package Tour \n");
    printf("++++++++++++++++++++++++++++++++++\n");
    printf("Enter name of head group : ");
    scanf("%s", &name);
    printf("Enter telephone of head group : ");
    scanf("%d", &telephone);
    printf("Enter number of group : ");
    scanf("%d", &peple);

    if (peple >= 11)
    {
        price = 150 * peple;
    }else if (peple > 6)
    {
        price = 210 * peple;
    }else if (peple > 3)
    {
        price = 250 * peple;
    }else
    {
        price = 300 * peple;
    }

    printf("++++++++++++++++++++++++++++++++++\n");
    printf("Pay for package tour is %.2f\n", price);
    printf("++++++++++++++++++++++++++++++++++\n");

    return 0;
}
    