#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
    int height, side;

    printf("");
    scanf("%d %d", &height, &side);

    int base = sqrt((side * side) - (height * height));
    int perimeter = height + side + base;
    int area = (base * height) / 2;

    printf("Alas = %d cm\n", base);
    printf("Tinggi = %d cm\n", height);
    printf("Keliling = %d cm\n", perimeter);
    printf("Luas = %d cm^2\n", area);
    return 0;
}