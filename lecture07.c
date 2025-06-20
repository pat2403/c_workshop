#include <stdio.h>

void main (){
    //สร้างตัวแปรค้องมี ขนิดข้อมูล ชื่อตัวแปร ;
    int aa = 1021212; //(%d) ไม่เกินหลักหมื่น
    float bb = 100.654; //(%f)
    double cc = 216.51; //(%lf)
    char dd = '#'; //(%c)Charator คือตัวอักษรตัวเดียว อยู่ใน '?'
    char ee []= "Hello...^_^"; // (%s)String
    long ff = 4655665; //(%ld)เกินหลักหมื่น

    printf ("AA : %d\n", aa);
    printf ("BB : %f\n", bb);
    printf ("CC : %lf\n", cc);
    printf ("DD : %c\n", dd);
    printf ("EE : %s\n", ee);
    printf ("FF : %i\n", ff);
}