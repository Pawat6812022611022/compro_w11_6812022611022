#include <stdio.h>

void inputAndshow() {  //สร้างฟังก์ชัน
    int M,P,C;
    printf("Enter Math: "); 
    scanf("%d", &M);            //รับค่าของ Math

    printf("Enter Physics: ");
    scanf("%d", &P);            //รับค่าของ Physics

    printf("Enter Chemistry: ");    
    scanf("%d", &C);            //รับค่าของ Chemistry

    printf("\nScore: Math = %d, Physics = %d, Chemistry = %d", M,P,C); //แสดงค่าคะแนนทุกวิชา
}

int main() {

    inputAndshow();   //เรียกใช้ฟังก์ชัน void inputAndshow()

    return 0;
}