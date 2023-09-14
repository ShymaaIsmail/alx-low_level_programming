#ifndef HEADER_FILE
#define HEADER_FILE
typedef struct spec
{
char *symbol;
int (*print)();
} spec_type;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
