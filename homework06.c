//โปรแกรมคำนวณค่าเช่าห้อง

#include <stdio.h>
#include <string.h>
void dat(){
    printf("+++++++++++++++++++++++++++++\n");
}
int main(){
    int room;
    double water;
    double electric;
    double rent;
    double total;
    char name[] = " ";

    printf("+++++++++++++++++++++++++++++\n");
    printf("    Program Rent House\n");
    printf("+++++++++++++++++++++++++++++\n");
    for (room = 1; room <= 10; room++)
    {
        printf("Room No. %d\n", room);
        printf("Enter name : "); scanf("%s", &name);
        if (strcmp( name, "x") == 0 || strcmp( name, "X") == 0) {
            continue; 
        }
        printf("Rent per room : "); scanf("%lf", &rent);
        printf("Enter unit water use : "); scanf("%lf", &water);
        printf("Enter unit electric use : "); scanf("%lf", &electric);
        total = (water * 12.50) + (electric * 8.00) + rent;
        printf("Total charge is %.2f\n", total);
    }
    printf("+++++++++++++++++++++++++++++\n");
}