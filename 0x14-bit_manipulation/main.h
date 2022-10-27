#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stddef.h>

int _putchar(char c);
int check_valid_string(const char *b);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);

#endif /* MAIN_H */


