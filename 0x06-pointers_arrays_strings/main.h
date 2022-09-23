#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Desc: Header file containing prototype for all functions used in
 *	the 0x06-pointers_arrays_strings directory.
 */

int _putchar(char c);

char *strcat(char *dest, *src);

char *strncat(char *dest, *src, int n);

char *strncpy(char *dest, *src, int n);

int _strcmp(char *s1, char *s2);

void reverse_array(int *a, int n);

char *string_toupper(char *);

char *cap_string(char *);

char *leet(char *);

char *rot13(char *);

void print_number(int n);

char *infinite_add(char *n1, char *2, char *r, int size_r);

void print_buffer(char *b, int size);


#endif
