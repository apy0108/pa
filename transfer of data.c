#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define SIZE 10 // Define a constant SIZE with value 10

unsigned char data[SIZE];             // Main data array
unsigned char internal_data[SIZE];    // Internal memory array
unsigned char external_mem[SIZE];     // External memory array

// Copy 'size' bytes from 'src' to 'dest'
void transfer_internal_to_internal(unsigned char *src, unsigned char *dest, int size) {
    memcpy(dest, src, size);
}

// Copy 'size' bytes from 'src' to 'dest'
void transfer_internal_to_external(unsigned char *src, unsigned char *dest, int size) {
    memcpy(dest, src, size);
}

void main(void) {
    srand(time(NULL)); // Seed the random number generator

    // Initialize data array with random values (0-255)
    for (int i = 0; i < SIZE; i++) {
        data[i] = rand() % 256;
    }

    // Transfer data to internal and external memory arrays
    transfer_internal_to_internal(data, internal_data, SIZE);
    transfer_internal_to_external(data, external_mem, SIZE);

    // Print original data
    printf("Original Data:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    // Print contents of internal_data
    printf("Data in Internal Memory:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", internal_data[i]);
    }
    printf("\n");

    // Print contents of external_mem
    printf("Data in External Memory:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", external_mem[i]);
    }
    printf("\n");

    while(1); // Infinite loop to simulate embedded environment
}
