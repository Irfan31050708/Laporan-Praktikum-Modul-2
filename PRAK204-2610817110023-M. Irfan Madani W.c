#include <stdio.h>

int main(){
    double radius, height;
    double pi = 22.0 / 7.0;

    printf("");
    scanf("%lf %lf", &radius, &height);

    double volume = pi * (radius * radius) * height;
    double area = 2 * pi * radius * (radius + height);
    double perimeter = 2 * pi * radius;

    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", area);
    printf("Keliling = %.2f\n", perimeter);
    return 0;
}