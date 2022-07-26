#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Auth: Dauda Renkre Mohammed
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x0B-more_malloc_free directory.
 */

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *create_array(unsigned int size, char c);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
