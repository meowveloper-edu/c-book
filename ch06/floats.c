#include <stdio.h>

int main (void) {

    float f1 = 3.14f;
    double d1 = 3.14;


    printf("%.20f\n", f1);
    printf("%.20f\n", d1);


    const double speed_of_light = 299792458.0;

    printf("normal: %f\n", speed_of_light);
    printf("notation: %e\n", speed_of_light);
    return 0;
}