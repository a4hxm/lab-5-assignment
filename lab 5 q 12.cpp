#include <stdio.h>
int main() {
    float attendance, assignment, exam,_grade;

    printf("Enter attendance percentage (out of 100): ");
    scanf("%f", &attendance);

    printf("Enter assignment score (out of 100): ");
    scanf("%f", &assignment);

    printf("Enter exam score (out of 100): ");
    scanf("%f", &exam);

    _grade = (attendance * 0.10) + (assignment * 0.40) + (exam * 0.50);
    printf("Final Grade: %.2f\n", _grade);

    if (_grade >= 90) {
        printf("Grade: A\n");
    } else if (_grade >= 80) {
        printf("Grade: B\n");
    } else if (_grade >= 70) {
        printf("Grade: C\n");
    } else if (_grade >= 60) {
        printf("Grade: D\n");
    } else {
        if (attendance < 50) {
            printf("Grade: Fail due to insufficient attendance\n");
        } else if (assignment < 40) {
            printf("Grade: Fail due to low assignment score\n");
        } else if (exam < 40) {
            printf("Grade: Fail due to poor exam score\n");
        } else {
            printf("Grade: Fail\n");
        }
    }

    return 0;
}

