#ifndef MAIN_H
#define MAIN_H

int clear_bit(unsigned long int *n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);
int _putchar(char c);
void print_binary(unsigned long int n);
unsigned int binary_to_uint(const char *b);
#endif
