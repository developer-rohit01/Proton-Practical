#include <stdio.h>

struct student {
    int roll;
    char name[50];
    float marks;
};

void store(struct student s[], int n);
void display(struct student s[], int n);

int main() {
    struct student s[10];
    int n = 10;

    store(s, n);    
    display(s, n);  

    return 0;
}


void store(struct student s[], int n) {
    printf("Enter details of %d students:\n", n);

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);   // reads single-word name

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}

void display(struct student s[], int n) {
    printf("\nStudent Records:\n");

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }
}
