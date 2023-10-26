#ifndef MAIN_H
#define MAIN_H

int clear_bit(unsigned long int *n, unsigned int index);
unsigned int binary_to_uint(const char *b);
int get_bit(unsigned long int n, unsigned int index);
int get_endianness(void);
void print_binary(unsigned long int n);
int _putchar(char c);
unsigned long int _power(unsigned int base, unsigned int pow);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int set_bit(unsigned long int *n, unsigned int index);

#endif /*MAIN_H*/
