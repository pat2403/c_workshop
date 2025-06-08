//Variable ******************
#include <stdio.h>

void main(){
    //int ชนิดจำนวนเต็มไม่เกินหลักหมื่น
    int midtermScore = 50;
    int finalScore = 20;
    int quizScore;
    int totalScore;

    quizScore = 15;
    totalScore = midtermScore + finalScore + quizScore;
    
    //ตัวแปรห้ามเขียนใน "???" ให้เขียนหลัง
    //ตัวแปร ให้ใข้ format code
    printf("Minterm score = %d \n", midtermScore);
    printf("final score = %d \n", finalScore);
    printf("quiz score = %d \n", quizScore);
    printf("Total score = %d \n", totalScore);
}
    