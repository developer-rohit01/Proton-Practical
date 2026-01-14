#include <stdio.h>


struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    struct Student s;
    FILE *fp;
    int i;

   
    fp = fopen("student.dat", "wb");
    if (fp == NULL) {
        printf("File cannot be opened\n");
        return 1;
    }

    printf("Enter details of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s.roll_no);

        printf("Name: ");
        scanf(" %[^\n]s", s.name);

        printf("Marks: ");
        scanf("%f", &s.marks);

       
        fwrite(&s, sizeof(s), 1, fp);
    }

    fclose(fp);

    
    fp = fopen("student.dat", "rb");
    if (fp == NULL) {
        printf("File cannot be opened\n");
        return 1;
    }

    
    printf("\nStudents scoring above 75 marks:\n");

    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.marks > 75) {
            printf("\nRoll No: %d", s.roll_no);
            printf("\nName: %s", s.name);
            printf("\nMarks: %.2f\n", s.marks);
        }
    }

    fclose(fp);

    return 0;
}
