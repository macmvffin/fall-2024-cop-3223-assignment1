#include <stdio.h>
#include <math.h>
#define PI 3.14159

double calculateDistance (double x1, double y1, double x2, double y2){

    printf("Point #1 entered: x1 = %lf; y1= %lf\n", x1, y1);
    printf("Point #2 entered: x1 = %lf; y1= %lf\n", x2, y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The distance between the two points is %lf\n", distance);
    return distance;
}


double calculatePerimeter (double x1, double y1, double x2, double y2, double distance){

    printf("Point #1 entered: x1 = %f; y1= %f\n", x1, y1);
    printf("Point #2 entered: x1 = %f; y1= %f\n", x2, y2);

    double perimeter = 2 * PI * (distance/2);
    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);
    return 2.0;
}


double calculateArea (double x1, double y1, double x2, double y2, double distance){

    printf("Point #1 entered: x1 = %f; y1= %f\n", x1, y1);
    printf("Point #2 entered: x1 = %f; y1= %f\n", x2, y2);

    double area = PI * pow(distance / 2, 2);
    printf("The area of the city encompassed by your request is %lf\n", area);
    return 2.5;
}


double calculateWidth (double x1, double y1, double x2, double y2, double distance){

    printf("Point #1 entered: x1 = %f; y1= %f\n", x1, y1);
    printf("Point #2 entered: x1 = %f; y1= %f\n", x2, y2);

    double width = distance;
    printf("The width of the city encompassed by your request is %lf\n", width);
    return 2.5;
}

double calculateHeight (double x1, double y1, double x2, double y2, double distance){

    printf("Point #1 entered: x1 = %f; y1= %f\n", x1, y1);
    printf("Point #2 entered: x1 = %f; y1= %f\n", x2, y2);

    double height = distance;
    printf("The height of the city encompassed by your request is %lf\n", height);
    return 2.5;
}



int main(){

    double x1, y1, x2, y2;

    printf("Enter x coordinate for point 1:");
    scanf("%lf", &x1);

    printf("Enter y coordinate for point 1:");
    scanf("%lf", &y1);

    printf("Enter x coordinate for point 2:");
    scanf("%lf", &x2);

    printf("Enter y coordinate for point 2:");
    scanf("%lf", &y2);

    double distance = calculateDistance(x1,y1,x2,y2);
    calculateDistance(x1,y1,x2,y2);
    calculatePerimeter(x1,y1,x2,y2,distance);
    calculateArea(x1,y1,x2,y2,distance);
    calculateWidth(x1,y1,x2,y2,distance);
    calculateHeight(x1,y1,x2,y2,distance);

    return 0;

}
