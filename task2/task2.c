#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)      { printf("Adding 'a' and 'b'\n");       return a + b; }
int subtract(int a, int b) { printf("Subtracting 'b' from 'a'\n"); return a - b; }
int multiply(int a, int b) { printf("Multiplying 'a' and 'b'\n");  return a * b; }
int divide(int a, int b)   { printf("Dividing 'a' by 'b'\n");      return a / b; }
int quit(int a, int b)     { exit(0); }

int main(void)
{
    int a = 6, b = 3;
    char choice;
    int (*ops[5])(int, int) = { add, subtract, multiply, divide, quit };

    printf("Operand 'a' : %d | Operand 'b' : %d\n", a, b);
    printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
    scanf(" %c", &choice);

    int x = ops[choice - '0'](a, b);
    printf("x = %d\n", x);
    return 0;
}