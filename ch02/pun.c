/************************************
* Name: pun.c                       *
* Purpose: Prints a bad pun         *
* Author: meowveloper               *
*************************************/

#include <stdio.h>

void break_line(void);

int main(void) {
    break_line();
    printf("***************************************************");
    break_line();
    printf("To C, or not to C: that is the question.\n");
    break_line();
    printf("Brevity is the soul of wit.\n   --Shakespeare\n");
    printf("***************************************************");
    break_line();
    break_line();
    return 0;
}

void break_line(void) {
    printf("\n");
}