#include <stdio.h>

float prompt_user(void);
float calc_cel(float fah);

int main(void) {
    const float fah = prompt_user();
    const float cel = calc_cel(fah);
    
    printf("Celsius equivalent: %.1f\n", cel);

    return 0;
}

float prompt_user(void) {
    float fah;

    printf("Enter Fahrenheit temperatiure: ");
    scanf("%f", &fah);

    return fah;
}

float calc_cel(float fah) {

    const float FREEZING_PT = 32.0f;
    const float SCALE_FACTOR = (5.0f / 9.0f);

    return ((fah - FREEZING_PT) * SCALE_FACTOR);
}