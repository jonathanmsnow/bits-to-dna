#include "binary_to_ternary.h"



int* binToTern(int binary) {
    // Divide the binary number into groups of 3 bits starting from the rightmost bit
    // Convert each groupt of 3 bits to its corresponding decimal value
    // Concatenate the decimal values to form the ternary equivalent of the binary number
} 

int main(int argc, char *argv[]) {
    int number = 0b11010111;
    size_t num_bits = sizeof(number) * 8;
    size_t num_groups = num_bits / 3;
    if (num_bits % 3 != 0) {
        num_groups++;
    }
    printf("Number of 3-bit groups in %d: %ld\n", number, num_groups);
    return 0;

}