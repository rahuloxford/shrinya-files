#include <stdio.h>

struct Student {
    char name[50];
    int rno;
    int age;
    float marks;
};

int main() {

    // store 5 student details
    // [name, rno, age, marks]
    struct Student stu1 = {"Lewis", 18996, 26, 93.5};
    struct Student stu2 = {"Kimi", 48358, 18, 86.3};
    // set the values
    // strcpy(stu1.name, "Tim Cook");
    // stu1.rno = 489;
    // stu1.age = 28;
    // stu1.marks = 96.93;

    // strcpy(stu2.name, "Max");
    // stu2.rno = 942;
    // stu2.age = 24;
    // stu2.marks = 84.3;

    stu1.age = 33; // Modify the value
    
    printf("Name: %s Rno: %d Age: %d Marks: %.1f\n", stu1.name, stu1.rno, stu1.age, stu1.marks);
    printf("Name: %s Rno: %d Age: %d Marks: %.1f\n", stu2.name, stu2.rno, stu2.age, stu2.marks);

    return 0;
}