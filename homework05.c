//โปรแกรมตรวจสอบผลการเรียน

#include <stdio.h>

int dat(){
    printf("----------------------------------\n");
}

void main(){
    char name[] = " ";
    int number;
    double gpa;
    char id;

    dat();
    printf("Program Student Result\n");
    dat();
    printf("Enter number of student : "); scanf("%d", &number);
    dat();
    for (int i = 1; i <= number; i++){
        printf("Student No.%d\n", i);
        printf("Enter student id : "); scanf("%d", &id);
        printf("Enter student name : "); scanf("%s", &name);
        printf("Enter student gpa : "); scanf("%lf", &gpa);
        printf("Study result is : ");
        if (gpa < 2.00) {
            printf("NOT PASS\n");
        } else {
            printf("PASS\n");
        }
    }
    
}