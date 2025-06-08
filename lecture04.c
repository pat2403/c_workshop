#include <stdio.h>
#define LINE printf("++++++++++++++++++++++++++\n");

double vat = 0.7;

void calAndShowVat(double price){
    printf("Vat of %.2f is %.2f\n", price, price*vat);

}
//การทำงานเริ่มที่ main จบที่ main และทำงานจากซ้ายไปขวา บนลงล่าง
int main(){
    LINE
    printf("hello.....\n");
    LINE
    calAndShowVat(100);
    LINE
    return 0;
}

void showHi(){
    printf("Hi....\n");
}