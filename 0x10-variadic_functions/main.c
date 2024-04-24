#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	    char ch = 'X';
    int num = 42;
    float pi = 3.14159;
    char *str = "Hello, World!";
    double dbl = 123.456;
    
    print_all("cifs", ch, num, pi, str);
    print_all("cifsd", ch, num, pi, str, dbl);
    print_all("fics", pi, ch, num, str);
    print_all("d", dbl);
    print_all("");
	print_all("ceis", 'B', 3, "stSchool");
	 print_all("cifs", 'H', 123, 3.14, "Hello, World!");
    print_all("cf", 'A', 2.718);
    print_all("si", "Testing", -99);

	return (0);
}
