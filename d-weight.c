#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void) {
    int l, w, h, v, dw;

    printf("Enter the dimensions of the box\n");
    printf("length: ");
    scanf("%d", &l);
    printf("height: ");
    scanf("%d", &h);
    printf("width: ");
    scanf("%d", &w);

    v = l * h * w;
    dw = (v + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("dimensions : %d x %d x %d.\n", l, h, w);
    printf("volume (cubic inches): %d.\n", v);
    printf("dimensional weight: %d.\n", dw);

    return 0;
}