#include <stdio.h>
#include <math.h>

// write function to calculate area of a square, a circle & a rectangle

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

int main()
{
    float a = 4.0;
    float b = 2.0;
    printf("area of square %f\n", squareArea(a));
    printf("area of circle %f\n", circleArea(b));
    printf("area of rectangle %f \n", rectangleArea(a, b));
    return 0;
}

float squareArea(float side)
{
    return side * side;
}

float circleArea(float rad)
{
    return 3.14 * rad * rad;
}

float rectangleArea(float a, float b)
{
    return a * b;
}
