#include <stdio.h>
 float scores[3][3];

void inputScore(float arr[3][3]) {      //สร้างฟังก์ชัน inputScore เพื่อรับค่าคะแนน

    for (int i = 0; i < 3; i++)
    {
        printf("Enter scores for student %d:\n", i+1);
        printf("  Math: ");
        scanf("%f",&arr[i][0]);

        printf("  Physics: ");
        scanf("%f",&arr[i][1]);

        printf("  Chemistry: ");
        scanf("%f",&arr[i][2]);
    }
}

    



void printTable(float arr[3][3]) {      //สร้างฟังก์ชัน printTable

    printf("\n");
    printf("Score Table:\n");           //แสดงค่า ตารางคะแนน กำหนดการเว้นช่องให้ได้ตารางที่สวยงาม
    printf("%-8s %7s %8s %8s\n", "student" , "Math" , "Physics" , "Chemistry");  

        for(int i = 0; i < 3; i++) {
            printf("%-8d", i+1);
             for(int j = 0; j < 3; j++) {
                 printf("%8.2f",arr[i][j]);
        }
            printf("\n");
    }

}

void printAverage(float arr[3][3]) {        //สร้างฟังก์ชัน printAverage

    float avgMath, avgPhysics, avgChemistry;        //กำหนดตัวแปรต่างๆ
    float sumM,sumP,sumC;

    for (int i = 0; i < 3; i++)             //ใช้ for loop เพื่อคำนวนค่าผลรวมคะแนนก่อนไปหาค่าเฉลี่ย
    {
        sumM = sumM + arr[i][0];                
        sumP = sumP + arr[i][1];
        sumC = sumC + arr[i][2];

    }
    
    avgMath = sumM / 3;                     //คำนวนค่าเฉลี่ยของแต่ละวิชา
        avgPhysics = sumP / 3;
        avgChemistry = sumC / 3;

        printf("\nAverage per subject:\n");         //แสดงค่าเฉลี่ยของแต่ละวิชา
        printf("Math: %.2f\n", avgMath);
        printf("Physics: %.2f\n", avgPhysics);
        printf("Chemistry: %.2f\n", avgChemistry);

    
}

int main() {        

  float score[3][3];            //กำหนดตัวแปร score

  inputScore(score);            //เรียกใช้ฟังก์ชัน
  printTable(score);
  printAverage(score);

    return 0;
}