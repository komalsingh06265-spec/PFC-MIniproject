#include <stdio.h>
int main() {
    char name[50];
    int roll;
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    // Input student details
    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    // Input marks
    printf("Enter marks of 5 subjects:\n");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    // Calculate total and percentage
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    // Display result
    printf("\n--- Student Result ---\n");
    printf("Name: %s\n", name);
    printf("Roll No: %d\n", roll);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f\n", percentage);

    // Grade calculation
    if (percentage >= 75)
        printf("Grade: A\n");
    else if (percentage >= 60)
        printf("Grade: B\n");
    else if (percentage >= 50)
        printf("Grade: C\n");
    else if (percentage >= 40)
        printf("Grade: D\n");
    else
        printf("Grade: Fail\n");
    return 0;
}