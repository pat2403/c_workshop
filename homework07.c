//โปรหาค่ามากที่สุด น้อยที่สุด ผลรวม และค่าเฉลี่ย ของข้อมูลที่ป้อน N จำนวน

#include <stdio.h>

int main(){
    int n;
    int max = 0;
    int min = 0;
    int sum = 0;
    double avg = 0.0;

    printf("+++++++++++++++++++++++++++++++++++++++++++\n");
    printf("             Program Nunber\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++\n");
    printf("Enter number total : "); scanf("%d", &n);
    printf("+++++++++++++++++++++++++++++++++++++++++++\n");
    for (int i = 1; i <= n; i++){
        int num;
        printf("Number %d : ", i); scanf("%d", &num);
        if (i == 1){
            max = num;
            min = num;
        }else if (num > max){
            max = num;
        }else if (num < min){
            min = num;
        }
        sum = sum + num;
        avg = (double)sum / n;
    }
    printf("+++++++++++++++++++++++++++++++++++++++++++\n");
    printf("Maximum number is = %d\n", max);
    printf("Minimum number is = %d\n", min);
    printf("Sum number is = %d\n", sum);
    printf("Average number is = %.2lf\n", avg);
    printf("+++++++++++++++++++++++++++++++++++++++++++\n");
}