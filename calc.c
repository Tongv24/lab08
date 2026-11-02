#include "calc.h"
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b, int *ok) {
    *ok = (b != 0);
    return *ok ? a / b : 0;
}
