#include <stdio.h>

char get_char();
void print_grade(const char i);

int main (void) {

    const char i = get_char();
    print_grade(i);

    return 0;
}



char get_char() {
    char i;
    printf("Enter a character A,B,C,D or F: ");
    scanf("%c", &i);
    return i;
}


/*
    * A: "Excellent"
    * B: "Good"
    * C: "Average"
    * D: "Poor"
    * F: "Failing"
*/



void print_grade(const char i) {
    switch (i)
    {
        case 'A':
        case 'a':
            printf("Excellent\n");
        break;

        case 'B':
        case 'b':
            printf("Good\n");
        break;
        
        case 'C':
        case 'c':
            printf("Average\n");
        break;

        case 'D':
        case 'd':
            printf("Poor\n");
        break;

        case 'F':
        case 'f':
            printf("Failing\n");
        break;

        default:
            printf("You pick the wrong character\n");
            break;
    }
}