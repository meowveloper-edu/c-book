#include <stdio.h>
#include <limits.h> // Provides constants for min/max values of types, like INT_MAX and UINT_MAX

int main (void) {

    // A signed int uses one bit to represent the sign (+/-).
    int max_signed_int = INT_MAX; // The largest possible value for a signed int

    // An unsigned int uses all bits for the number, so it can't be negative
    // but its maximum positive value is much larger.
    unsigned int max_unsigned_int = UINT_MAX; // The largest possible value for an unsigned int

    printf("max signed int: %d\n", max_signed_int);

    // CRITICAL: We must use the %u format specifier for unsigned integers.
    // If we use %d, printf will interpret the bits as a signed value.
    // For UINT_MAX, the bit pattern (all 1s) represents -1 in signed (two's complement) representation.
    printf("max unsigned int: %u\n", max_unsigned_int);

    // Incrementing the variables to cause an overflow.
    max_signed_int++;
    max_unsigned_int++;

    // Signed integer overflow. When INT_MAX is incremented, it wraps around
    // to the smallest possible negative value (INT_MIN). This is technically
    // "undefined behavior" in C, but this is the common result on most systems.
    printf("max signed int + 1: %d\n", max_signed_int);

    // Unsigned integer overflow. When UINT_MAX is incremented, it wraps
    // around to 0. This behavior is well-defined in C.
    printf("max unsigned int + 1: %u\n", max_unsigned_int);
    
    return 0;
}
