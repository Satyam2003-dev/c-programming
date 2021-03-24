#include <stdio.h>
int main()
{
    float red, green, blue, white, max, cyan, magneta, yellow, black;
    printf("enter the value of colour RED GREEN BLUE in range between 0 to 255\n");
    scanf("%f %f %f", &red, &green, &blue);
    max = red / 255;
    if (max < green / 255)
        max = green;
    if (max < blue / 255)
        max = blue;
    white = max;
    printf("white= %f", white);
    cyan = (white - (red / 255)) / white;
    magneta = (white - (green / 255)) / white;
    yellow = (white - (blue / 255)) / white;
    black = 1 - white;
    printf("value of CMYK= %f %f %f %f ", cyan, magneta, yellow, black);
    return 0;
}
