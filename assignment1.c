//Nathan Treibitz 5599321

#include <stdio.h>
#include <math.h>

#define PI 3.14159  // Preprocessor directive for PI

// Function to calculate distance between two points
double calculateDistance(double x1, double y1, double x2, double y2) {
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}

// Function to calculate the perimeter of the city
double calculatePerimeter(double x1, double y1, double x2, double y2) {
    double perimeter = 2 * (fabs(x2 - x1) + fabs(y2 - y1));

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

    // Returning a difficulty level
    return 3.0; // Modify based on how difficult you found this task
}

// Function to calculate the area of the city
double calculateArea(double x1, double y1, double x2, double y2) {
    double area = fabs(x2 - x1) * fabs(y2 - y1);

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The area of the city encompassed by your request is %.2f\n", area);

    // Returning a difficulty level
    return 2.0; // Modify based on how difficult you found this task
}

// Function to calculate the width of the city
double calculateWidth(double x1, double y1, double x2, double y2) {
    double width = fabs(x2 - x1);

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The width of the city encompassed by your request is %.2f\n", width);

    // Returning a difficulty level
    return 1.5; // Modify based on how difficult you found this task
}

// Function to calculate the height of the city
double calculateHeight(double x1, double y1, double x2, double y2) {
    double height = fabs(y2 - y1);

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);

    // Returning a difficulty level
    return 1.0; // Modify based on how difficult you found this task
}

// Function to ask for user input
double askForUserInput(const char* prompt) {
    double value;
    printf("%s", prompt);
    scanf("%lf", &value);
    return value;
}

// Main function
int main(int argc, char **argv) {
    // Getting input for points
    double x1 = askForUserInput("Enter x1: ");
    double y1 = askForUserInput("Enter y1: ");
    double x2 = askForUserInput("Enter x2: ");
    double y2 = askForUserInput("Enter y2: ");
    
    // Call the required functions
    calculateDistance(x1, y1, x2, y2);
    calculatePerimeter(x1, y1, x2, y2);
    calculateArea(x1, y1, x2, y2);
    calculateWidth(x1, y1, x2, y2);
    calculateHeight(x1, y1, x2, y2);

    return 0;
}
