#include <stdio.h>
void one_to_ten(void);

int main(void) {
    one_to_ten();
    return 0;

}


void one_to_ten(void) {
    int i = 1;

    while (i <= 10) {
        printf("i is %d.\n", i);
        i++;
    }
}