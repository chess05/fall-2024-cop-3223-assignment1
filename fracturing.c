//********************************************************
// Fracturing Assignment 1
// Author: Caleb Hess
// Date: 9/5/24
// Class: COP 3223, Professor Parra
// Purpose: 
// Input: 
// Output: 
// //********************************************************
#include <stdio.h>
#include <math.h>
#define PI 3.14159

double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

double calculateDistance() {
    double x1, y1, x2, y2;
    //User input
    printf("Enter coordinates for Point #1 (x1 y1): \n");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter coordinates for Point #2 (x2 y2): \n");
    scanf("%lf %lf", &x2, &y2);

    //Output
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 entered: x1 = %.1lf; y1 = %.1lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.1lf; y2 = %.1lf\n", x2, y2);
    printf("The distance between the two points is %.1lf\n", distance);

    return distance;
}

double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = 2 * distance;
    //Output
    printf("The perimeter of the city encompassed by your request is %.1lf\n", perimeter);
    return 3.0;
}

double calculateArea() {
    double distance = calculateDistance();
    double area = pow(distance, 2);

    //Output
    printf("The area of the city encompassed by your request is %.1lf\n", area);
    return 2.5;
}

double calculateWidth() {
    double x1, y1, x2, y2;

    //User input
    printf("Enter coordinates for Point #1 (x1 y1): \n");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter coordinates for Point #2 (x2 y2): \n");
    scanf("%lf %lf", &x2, &y2);

    //Output
    double width = fabs(x2 - x1);
    printf("Point #1 entered: x1 = %.1lf; y1 = %.1lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.1lf; y2 = %.1lf\n", x2, y2);
    printf("The width of the city encompassed by your request is %.1lf\n", width);

    return 2.5;
}

double calculateHeight() {
    double x1, y1, x2, y2;

    //User input
    printf("Enter coordinates for Point #1 (x1 y1): \n");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter coordinates for Point #2 (x2 y2): \n");
    scanf("%lf %lf", &x2, &y2);

    //Output
    double height = fabs(y2 - y1);
    printf("Point #1 entered: x1 = %.1lf; y1 = %.1lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.1lf; y2 = %.1lf\n", x2, y2);
    printf("The height of the city encompassed by your request is %.1lf\n", height);

    return 3.5; 
}