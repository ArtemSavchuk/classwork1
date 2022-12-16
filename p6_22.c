#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint32_t set_bits(uint32_t n, int k) {
  // Create a mask with all 1s except for the least significant k bits
  uint32_t mask = ~((1u << k) - 1);
  
  // Return the result of applying the mask to n
  return n & mask;
}

int main(int argc, char** argv) {
  // Test the function with some sample inputs
  printf("%u\n", set_bits(0b11001100, 4));  // should print 0b11000000
  printf("%u\n", set_bits(0b10101010, 3));  // should print 0b10101000
  printf("%u\n", set_bits(0b11110000, 8));  // should print 0b11110000
  
  return 0;
}