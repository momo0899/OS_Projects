#include <stdio.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50

int main() {
    char names[MAX_STUDENTS][MAX_NAME_LENGTH];
    float gpas[MAX_STUDENTS];
    int numStudents = 0;
    int i;

    printf("Enter student names and GPAs (separated by a space), press Ctrl + D to finish:\n");

    // Read student names and GPAs until Ctrl + D (EOF signal) is encountered
    while (scanf("%s %f", names[numStudents], &gpas[numStudents]) != EOF) {
        numStudents++;

        // Check if the maximum number of students is reached
        if (numStudents >= MAX_STUDENTS) {
            break;
        }
    }
    printf("\n");
    // Display the entered student information
    for (i = 0; i < numStudents; i++) {
      if (gpas[i] > 3.0){
        printf("%s\n", names[i]);
      }
    }

    return 0;
}

