#include <stdio.h>

void give_output(const int num);

int main(void) {
    int num;

    printf("Please enter an integer number: ");
    scanf("%d", &num);

    give_output(num);
    return 0;
}

void give_output(const int num) {
    if(num < 0)
    {
        printf("The number is less than zero\n");
    } 
    else if(num > 0)
    {
        printf("The number is greater than zero\n");
    }
    else 
    {
        printf("The number is equal to zero\n");
    }

}

