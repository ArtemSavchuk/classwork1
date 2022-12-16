int main(void) {
  unsigned int num = 0b11111111111111111111111111111111; // 32-bit number in binary

  int msb_position = (sizeof(num) * 8) - 1; // 31
  int msb = num & (1 << msb_position); // 1
  int lsb = num & 1; // 1

  printf("MSB: %d\n", msb);
  printf("LSB: %d\n", lsb);

  return 0;
}