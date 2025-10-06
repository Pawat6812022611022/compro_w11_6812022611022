#include <stdio.h>

float average(int a,int b,int c) {      //สร้างฟังก์ชัน

    return (a+b+c)/3;  //คืนค่าค่าเฉลี่ย

}

int main() {

    float avg;      //ประกาศตัวแปร
    int m,p,c;      

    printf("Enter Math score: ");       //รับค่า Math
    scanf("%d", &m);

    printf("Enter Physics score: ");    //รับค่า Physics
    scanf("%d", &p);

    printf("Enter Chemistry score: ");  //รับค่า Chemistry
    scanf("%d", &c);

    printf("\nMath = %d\n", m);
    printf("Physics = %d\n", p);
    printf("Chemistry = %d\n", c);      //แสดงผลคะแนน

    avg = average(m,p,c);       //กำหนดค่าตัวแปร avg

    printf("Average = %.2f", avg);  //แสดงค่า Average
    return 0;

}


