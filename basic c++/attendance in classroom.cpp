#include <stdio.h>

int main() {
    // Declare variables
    int total_classes = 500;
    int attended_classes = 50;
    float percentage;

    // Calculate the attendance percentage
    percentage = ((float)attended_classes / total_classes) * 100;

    // Display the percentage
    printf("Total Classes: %d\n", total_classes);
    printf("Attended Classes: %d\n", attended_classes);
    printf("Attendance Percentage: %.2f%%\n", percentage);

    // Determine pass or fail based on attendance percentage
    if (percentage >= 75.0) {
        printf("Result: Pass\n");
    } else {
        printf("Result: Fail\n");
    }

    return 0;
}
